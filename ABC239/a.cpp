#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double h;
    double ans;
    cin >> h;
    ans = sqrt(h*(12800000+h));
    cout << fixed << setprecision(10) << ans << endl;
    
    return 0;

}