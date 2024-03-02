#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string ans;
    cin >> n;
    ans = "";
    for (int i=0; i<n; i++){
        ans = ans + to_string(n);
    }

    cout << ans << endl;

    return 0;
}