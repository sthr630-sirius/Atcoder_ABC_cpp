#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int num;
    cin >> s;
    num = stoi(s.substr(3));
    if (num <= 349 && num != 0 && num != 316){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;
}