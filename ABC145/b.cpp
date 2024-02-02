#include<iostream>
using namespace std;
int main(){
    int n;
    int devide_idx;
    string s, t1, t2;
    bool is_ans;
    cin >> n >> s;

    is_ans = true;

    if (n%2 == 0){
        devide_idx = n/2;
        t1 = s.substr(0, devide_idx);
        t2 = s.substr(devide_idx, devide_idx);
        
        if (t1 != t2){
            is_ans = false;
        }

    } else{
        is_ans = false;
    }

    if (is_ans){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;
}