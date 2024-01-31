#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s, ans;
    cin >> n;
    cin >> s;
    ans = s[0];

    for (int i=1; i<s.size(); i++){
        if (s[i] != ans.back()) ans = ans + s[i];
    }

    cout << ans.size() << endl;

    return 0;
}