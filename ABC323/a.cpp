#include<iostream>
using namespace std;
int main(){
    string s;
    bool is_ok;
    cin >> s;
    is_ok = true;
    for (int i=1; i<s.size(); i += 2){
        if (s[i] != '0'){
            is_ok = false;
        }
    }

    if (is_ok){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;

}