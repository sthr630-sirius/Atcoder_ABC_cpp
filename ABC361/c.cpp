#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, k;
    int l_idx, r_idx;
    int ans;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    ans = 1000000000;

    for(int i=0; i<=k; i++){
        l_idx = i;
        r_idx = n-1 - k + i;
        ans = min(ans, a[r_idx]-a[l_idx]);
    }
    
    cout << ans << endl;

    return 0;

}