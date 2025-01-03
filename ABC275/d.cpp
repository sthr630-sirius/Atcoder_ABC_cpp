#include<iostream>
#include<map>
using namespace std;
using ll = long long;


int f(ll n, map<ll, ll>& m){
    cout << "n: " << n << endl;
    if(n == 0) return 1;
    if(m[n]) return m[n];

    m[n] = (ll)(f((ll)(n/2), m) + f((ll)(n/3), m));
    cout << "momo n: " << n << endl;
    cout << "f(n): " << m[n] << endl;
    return m[n];
}


int main(){
    ll n;
    cin >> n;
    map<ll, ll> memo{};
    memo[0] = 1;

    cout << f(n, memo) << endl;

    return 0;
}