#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long x, n;
    cin >> x;
    n = x * 2;
    vector<bool> is_prime_list(n+1);

    for (long i=0; i<=n; i++){
        is_prime_list[i] = true; 
    }

    is_prime_list[0] = false;
    is_prime_list[1] = false;

    for (long i=2; i<=sqrt(n); i++){
        for (long j=2*i; j<=n; j+=i){
            if (is_prime_list[j]) is_prime_list[j] = false;
        }
    }

    for (long i=x; i<=n; i++){
        if (is_prime_list[i]){
            cout << i << endl;
            break;
        }  
    }

    return 0;
}