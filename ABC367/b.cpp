#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string x, split_x;
    vector<string> v;
    cin >> x;

    stringstream xx{x};

    while(getline(xx, split_x, '.')){
        v.push_back(split_x);
    }

    for(int i=v[1].size()-1; i>=0; i--){
        if(v[1][i] == '0') v[1].pop_back();
        else break;
    }

    if (v[1].empty()) cout << v[0] << endl; 
    else cout << v[0] << '.' << v[1] << endl;

    return 0;

}