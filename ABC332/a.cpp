#include<iostream>
using namespace std;
int main(){
    int n, s, k;
    int p, q;
    cin >> n >> s >> k;
    int ans;
    ans = 0;
    for (int i=0; i<n; i++){
        cin >> p >> q;
        ans += p*q;
    }

    if (ans < s){
        ans += k;
    }

    cout << ans << endl;
    return 0;
}

