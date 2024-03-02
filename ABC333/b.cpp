#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s, t;
    int s_len, t_len;
    vector<string> short_edge = {"AB", "AE", "BC", "CD", "DE"};
    vector<string> long_edge = {"AC", "AD", "BD", "BE", "CE"}; 
  
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    s_len = 2;
    t_len = 2;

    for (auto edge:short_edge){
        if (s == edge){
            s_len = 1;
            break;
        }
    }

    for (auto edge:short_edge){
        if (t == edge){
            t_len = 1;
            break;
        }
    }

    if (s_len == t_len){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;

}