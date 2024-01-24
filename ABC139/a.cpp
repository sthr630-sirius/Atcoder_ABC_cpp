#include<iostream>
using namespace std;
int main(){
    string s, t;
    int ans;
    cin >> s >> t;

    ans = 0;

    for (int i=0; i<3; i++){
        if (s[i] == t[i]) ans += 1;
    }

    cout << ans << endl;

    return 0;

}