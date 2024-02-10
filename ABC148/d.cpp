#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt, ans;
    
    for (int i=0; i<n; i++) cin >> a[i];
    cnt = 1;
    ans = 0;

    for (auto p:a){
        if(p == cnt) cnt++;
        else ans++;
    }

    if (cnt == 1) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
    
}