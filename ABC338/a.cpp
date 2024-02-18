#include<iostream>
using namespace std;
int main(){
    string s;
    bool condition_match;
    cin >> s;
    condition_match = true;

    if (islower(s[0])) condition_match = false;

    for (int i=1; i<s.size(); i++){
        if (isupper(s[i])){
            condition_match = false;
            break;
        }
    }

    if (condition_match) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}