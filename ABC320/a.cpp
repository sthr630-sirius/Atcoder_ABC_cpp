#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans;
    ans = pow(a, b) + pow(b, a);
    cout << ans << endl;

    return 0;

}