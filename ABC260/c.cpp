#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    vector<ll> r(n, 0), b(n, 0);

    r[n-1] = 1;

    for(int i=n-2; i>=0; i--){
        b[i+1] += r[i+1]*x;
        r[i] += r[i+1] + b[i+1];
        b[i] += b[i+1]*y;
    }

    cout << b[0] << endl;

    return 0;

}