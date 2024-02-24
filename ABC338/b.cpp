#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    char ans_key;
    int ans_value;
    map<char, int> char_dict{};

    cin >> s;
    ans_key = ' ';
    ans_value = 0;

    for (int i=0; i<s.size(); i++){
        char_dict[s[i]]++;
    }

    //cout << char_dict['A'] << endl;
    //for (auto& [k, v] : char_dict){
    //    cout << k << ":" << v << endl;     
    //}

    for (map<char, int>::iterator it = char_dict.begin(); it != char_dict.end(); it++){
        if (it->second > ans_value){
            ans_value = it->second;
            ans_key = it->first;
        }
    }

    cout << ans_key << endl;
    
    return 0;

}