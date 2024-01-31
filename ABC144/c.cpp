#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    long long n, sqrt_n;
    long long x, y;
    long long ans;

    cin >> n;
    sqrt_n = sqrt(n);

    ans = 1000000000000;

    for (long long i=1; i<=sqrt_n+1; i++){
        if (n%i == 0){
            x = i;
            y = n/i;
        }

        ans = min(ans, x+y);
    
    }

    cout << x << " " << y << endl;
    cout << (x-1)+(y-1) << endl;

    return 0;
}