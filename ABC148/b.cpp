#include<iostream>
using namespace std;
int main(){
    int n;
    string s, t, ans;
    cin >> n;
    cin >> s >> t;
    ans = "";
    for(int i=0; i<n; i++){
        ans = ans + s[i]+t[i];
    }
    cout << ans << endl;
    return 0;
}