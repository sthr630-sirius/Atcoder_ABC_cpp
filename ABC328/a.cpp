#include<iostream>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)n; i++)
int main(){
    int n, x;
    int s, ans;
    ans = 0;

    cin >> n >> x;

    rep(i, n){
        cin >> s;
        if (s <= x) ans += s;
    }
    
    cout << ans << endl;
    return 0;

}
