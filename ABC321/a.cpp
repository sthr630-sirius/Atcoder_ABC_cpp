#include<iostream>
using namespace std;
int main(){
    string s;
    bool is_like321;

    cin >> s;
    is_like321 = true;
    
    for (int i=0; i<s.size()-1; i++){
        if (s[i] <= s[i+1]) is_like321 = false;
    }

    if (is_like321) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}