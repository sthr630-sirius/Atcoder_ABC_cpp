#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    vector<ll> total_time(n), stage_clear_time(n);
    int min_b;
    ll ans;

    for(int i=0; i<n; i++) cin >> a[i] >> b[i];

    min_b = b[0];
    stage_clear_time[0] = a[0] + b[0];
    total_time[0] = stage_clear_time[0] + (ll)(x-1)*min_b;

    for(ll i=1; i<n; i++){
        min_b = min(min_b, b[i]);
        stage_clear_time[i] = stage_clear_time[i-1] + a[i] + b[i];
        total_time[i] = stage_clear_time[i] + (ll)(x-i-1)*min_b;
    }

    sort(total_time.begin(), total_time.end());

    cout << total_time[0] << endl;

    return 0;

}