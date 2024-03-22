#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    string s;
    string ans_string_head;
    int ans_string_length;
    set<string> ans_string_set;
    int idx, ans;
    cin >> n;
    cin >> s;

    idx = 0;
    ans_string_head = s[idx];
    ans_string_length = 1;
    ans_string_set.insert(ans_string_head + to_string(ans_string_length));

    for (int i=1; i<n; i++){
        if (s[idx] == s[i]){
            ans_string_length++;
        } else{
            idx = i;
            ans_string_head = s[idx];
            ans_string_length = 1;
        }
    
        ans_string_set.insert(ans_string_head + to_string(ans_string_length));
    }

    cout << ans_string_set.size() << endl;
    return 0;

}