#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, k;
    int slime, ans;
    cin >> a >> b >> k;
    slime = a;
    ans = 0;
    while(slime*pow(k, ans)<b) ans++;
    cout << ans << endl;
    
    return 0;
    
}