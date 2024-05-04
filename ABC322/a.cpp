#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    int ans;

    cin >> n;
    cin >> s;
    ans = -1;

    for (int i=0; i<n-2; i++){
        if (s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            ans = i+1;
            break;
        }
    }

    cout << ans << endl;

    return 0;

}