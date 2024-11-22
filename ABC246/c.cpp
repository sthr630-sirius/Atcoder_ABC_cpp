#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    long long ans;

    sort(a.rbegin(), a.rend());

    for(int i=0; i<n; i++){
        if(k-a[i]/x > 0){
            k -= a[i]/x;
            a[i] %= x;
        }else{
            a[i] -= k*x;
            k = 0;
        }
    }

    sort(a.rbegin(), a.rend());

    cout << "k: " << k << endl;
    for(auto ai:a) cout << ai << " ";
    cout << endl;

    ans = 0;
    for(int i=k; i<n; i++) ans += a[i];

    cout << ans << endl;

    return 0;

}