#include<iostream>
using namespace std;
int main(){
    string s;
    string counter;
    bool is_extend_abc;
    cin >> s;
    is_extend_abc = true;

    counter = "A";

    for (int i=0; i<s.size()-1; i++){
        if (int(s[i])> int(s[i+1])) is_extend_abc = false;
    }

    if (is_extend_abc) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}