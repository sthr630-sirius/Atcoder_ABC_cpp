#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    double ans;

    ans = 0.0;
    for(int i=0; i<n; i++) ans += double(1)/double(a[i]);
    cout << setprecision(16) << 1/ans << endl;


    return 0;

}