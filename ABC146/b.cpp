#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;

    for (int i=0; i<s.size(); i++){
        s[i] = char(((int(s[i])-65)+n)%26+65);
    }

    cout << s << endl;

    return 0;

}