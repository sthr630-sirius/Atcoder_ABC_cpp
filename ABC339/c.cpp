#include<iostream>
using namespace std;
int main(){
    string s, ans;
    cin >> s;
    ans = "";
    for (int i=s.size()-1; i>=0; i--){
        if (s[i] != '.'){
            ans = s[i]+ ans;
        } else{
            break;
        }
    }   

    cout << ans << endl;

    return 0;

}