#include<iostream>
using namespace std;
int main(){
    int n, ans;
    string s;
    cin >> n;
    ans = 0;
    for (int i=0; i<n; i++){
        cin >> s;
        if (s == "Takahashi") ans++;
    }

    cout << ans << endl;

    return 0;
}