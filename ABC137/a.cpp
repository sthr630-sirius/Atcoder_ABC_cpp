#include<iostream>
using namespace std;
int main(){
    int a, b;
    int ans;
    cin >> a >> b;
    ans = max(a+b, a-b);
    ans = max(ans, a*b);
    cout << ans << endl;
    return 0;
}