#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int upper(vector<long long> &a, int x){
    int l, r, mid;
    l = -1;
    r = a.size();
    while(l+1 < r){
        mid = (l+r)/2;
        if(a[mid] <= x) l = mid;
        else r = mid;
    }
    return l;
}

int main(){
    long long n;
    int cube_root_n;
    int k;
    double p_3, q;
    int ans;
    //cin >> n;
    n = pow(10, 18);
    n = 123456789012345;
    cube_root_n = cbrt(n);
    
    vector<bool> is_prime(cube_root_n+1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for(int i=2; i<sqrt(cube_root_n); i++){
        k = 2;
        while(i*k <= cube_root_n){
            is_prime[i*k] = false;
            k++;
        }
    }

    vector<long long> prime;
    for(int i=0; i<=cube_root_n; i++){
        if(is_prime[i]){
            prime.push_back(i);
        }
    }

    ans = 0;

    for(int i=0; i<prime.size(); i++){
        p_3 = 1;
        p_3 = (double) prime[i]*prime[i]*prime[i];
        q = (double) n / p_3;
        
        if(i == 100){
            cout << "p3: " << p_3 << endl;
            cout << "q : " << q << endl;
            cout << min(i-1, upper(prime, q))+1 << endl;
            cout << " " << endl;
        }
        
        ans += min(i-1, upper(prime, q))+1;
    }

    cout << prime.back() << endl;
    cout << "ans: " << ans << endl;

    return 0;

}