#include<iostream>
using namespace std;
int main(){
    long long x, ans;
    cin >> x;

    if(x >= 0) ans = x/10;
    else{
        x = -1 * x;
        ans = (x + 10 - 1) / 10;
        ans = -1 * ans;
    }

    cout << ans << endl;

    return 0;
}