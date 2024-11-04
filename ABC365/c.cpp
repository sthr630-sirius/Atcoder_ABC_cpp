#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
using namespace std;

bool check_x(long long m, long long x, vector<long long>& a){
    bool is_ok;
    long long amount;

    amount = 0;
    
    for(long long i=0; i<a.size(); i++){
        amount += min(x, a[i]);
    }

    if(amount <= m) is_ok = true;
    else is_ok = false;

    return is_ok;

}

int main(){
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    long long x;
    long long l, r, mid;
    
    for(long long i=0; i<n; i++) cin >> a[i];

    l = 0;
    r = pow(10, 9)+1;

    while(l+1 < r){
        mid = (l+r)/2;

        if(check_x(m, mid, a)) l = mid;
        else r = mid;
    }

    if(reduce(a.begin(), a.end()) <= m) cout << "infinite" << endl;
    else cout << l << endl;

    return 0;

}