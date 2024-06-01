#include<iostream>
#include<algorithm>
using namespace std;

int palindromes(string s){
    bool is_ok;
    is_ok = true;

    for (int i=0; i<s.size()/2; i++){
        if (s[i] == s[s.size()-i-1]){
            continue;
        } else{
            is_ok = false;
        }
    }
        
    if (is_ok){
        return s.size();
    } else{
        return -1;
    }
}

int main(){
    string s, target;
    cin >> s;
    int ans;

    ans = 1;

    for (int i=0; i<s.size(); i++){
        for (int j=2; j+i <= s.size(); j++){
            target = s.substr(i, j);

            ans = max(ans, palindromes(target));

            //if (is_ok) ans = max<size_t>(target.size(), ans);
        }
    }

    cout << ans << endl;

    return 0;

}