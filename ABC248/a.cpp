#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans;
    ans = 45;
    for(int i=0; i<s.size(); i++){
        ans -= int(s[i]-48);
    }

    cout << ans << endl;
    return 0;
}