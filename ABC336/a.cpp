#include<iostream>
using namespace std;
int main(){
    int n;
    string ans;
    cin >> n;

    ans = "L";

    for (int i=0; i<n; i++){
        ans += "o";
    }

    ans += "ng";

    cout << ans << endl;

    return 0;
}