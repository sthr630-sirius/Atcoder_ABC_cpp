#include<iostream>
using namespace std;
int main(){
    int n, a;
    cin >> n >> a;
    int ans;
    int t;
    ans = 0;
    for (int i=0; i<n; i++){
        cin >> t;
        if (ans <= t){
            ans = t+a;
        } else{
            ans += a;
        }
        cout << ans << endl;
    }

    return 0;

}