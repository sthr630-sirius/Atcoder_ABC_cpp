#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    int aidx, bidx;
    long long ans;
    
    for(int i=0; i<n; i++) cin >> a.at(i);
    for(int i=0; i<m; i++) cin >> b.at(i);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    aidx = 0;
    bidx = 0;
    ans = 0;

    while(aidx < n && bidx < m){
        if(a.at(aidx) >= b.at(bidx)){
            ans += a.at(aidx);
            aidx++;
            bidx++;
        }else{
            aidx++;
        }
    }

    if(aidx == n && bidx == m) cout << ans << endl;
    else if(aidx < n && bidx == m) cout << ans << endl;
    else if(aidx == n && bidx < m) cout << -1 << endl;

    return 0;

}