#include<iostream>
using namespace std;
int main(){
    string s;
    int last_idx, half_idx;
    int ans;
    cin >> s;

    last_idx = s.size()-1;
    ans = 0;

    if (s.size()%2==0){
        half_idx = s.size()/2-1;
    } else{
        half_idx = s.size()/2;
    }

    for (int i=0; i<=half_idx; i++){
        if (s[i] != s[last_idx-i]) ans++;
    }

    cout << ans << endl;
    return 0;
}