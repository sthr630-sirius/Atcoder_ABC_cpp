#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    string ans;
    vector<char> delete_char{'a', 'e', 'i', 'o', 'u'};
    cin >> s;
    
    for (auto c:s){
        if (find(delete_char.begin(), delete_char.end(), c) == delete_char.end()){
            ans.push_back(c);
        }
    }

    cout << ans << endl;

    return 0;

}