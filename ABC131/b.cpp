#include<iostream>
#include<tuple>
#include<vector>
#include<functional>
using namespace std;
int main(){
    int n, l;
    int ans;
    cin >> n >> l;

    vector<tuple<int, int, int>> apple(n);
    ans = 0;

    for (int i=0; i<n; i++){
        apple[i] = {i, l+i, abs(l+i)};
    }

    function cmp = [](const tuple<int, int, int> &x, const tuple<int, int, int> &y){
        return get<2>(x) < get<2>(y); 
    };

    sort(apple.begin(), apple.end(), cmp);

    get<1>(apple[0]) = 0;

    for (int i=1; i<n; i++){
        ans += get<1>(apple[i]);
    }

    cout << ans << endl;

    return 0;
}