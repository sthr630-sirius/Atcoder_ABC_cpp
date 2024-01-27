#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    bool is_stepable;
    cin >> s;

    is_stepable = true;
    
    for (int i=0; i<s.size(); i++){
        if (i%2 == 0){
            if (s.at(i) == 'L'){
                is_stepable = false;
            }
        } else{
            if (s.at(i) == 'R'){
                is_stepable = false;
            }
        }
    }
    
    if (is_stepable){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;
}