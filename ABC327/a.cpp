#include<iostream>
using namespace std;
int main(){
    int n;
    string s, target;
    bool is_ok;
    cin >> n;
    cin >> s;

    is_ok = false;
    
    for (int i=0; i<n-1; i++){
        target = "";
        target += s[i];
        target += s[i+1];
        if (target == "ab" | target == "ba") is_ok = true;
    }
    
    if (is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}