#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int ans;
    cin >> n;
    vector<int> d(n);
    for (int i=0; i<n; i++) cin >> d[i];
    ans = 0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            ans += d[i]*d[j];
        }
    }

    cout << ans << endl;
    return 0;
}
