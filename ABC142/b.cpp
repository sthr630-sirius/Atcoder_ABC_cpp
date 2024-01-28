#include<iostream>
using namespace std;
int main(){
    int n, k;
    int h;
    int ans;
    cin >> n >> k;

    ans = 0;

    for (int i=0; i<n; i++){
        cin >> h;
        if (h>=k) ans++;
    }

    cout << ans << endl;

    return 0;
}