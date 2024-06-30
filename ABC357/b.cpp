#include<iostream>
using namespace std;
int main(){
    string s;
    int upper_char, lower_char;
    cin >> s;
    upper_char = 0;
    lower_char = 0;
    for (int i=0; i<s.size(); i++){
        if (s[i] == toupper(s[i])){
            upper_char++;
        } else{
            lower_char++;
        }
    }

    if (upper_char > lower_char){
        for (int i=0; i<s.size(); i++){
            s[i] = toupper(s[i]);
        }
    } else{
        for (int i=0; i<s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;

}