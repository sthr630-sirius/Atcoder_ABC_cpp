#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    map<char, int> char_dict{};

    cin >> s;

    for (int i=0; i<s.size(); i++){
        char_dict[s[i]]++;
    }

    //cout << char_dict['A'] << endl;
    for (auto& [k, v] : char_dict){
        cout << k << ":" << v << endl;     
    }
    
    return 0;

}