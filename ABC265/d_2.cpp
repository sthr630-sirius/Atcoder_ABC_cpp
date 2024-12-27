#include<iostream>
#include<vector>
#include<set>
using namespace std;
using ll = long long;
int main(){
    int n;
    ll p, q, r;
    cin >> n >> p >> q >> r;
    vector<int> a(n+1);
    vector<ll> s(n+1);
    set<ll> t;
    bool is_ok;
    a[0] = 0;
    s[0] = (ll)a[0];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        s[i] = s[i-1] + a[i];
        t.insert(s[i]);
    }

    is_ok = false;

    for(int i=0; i<=n; i++){
        if(t.count(s[i]+p) && t.count(s[i]+p+q) && t.count(s[i]+p+q+r)) is_ok = true;
    }

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}