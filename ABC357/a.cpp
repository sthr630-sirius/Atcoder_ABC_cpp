#include<iostream>
using namespace std;
int main(){
    int n, m;
    int h;
    int ans;
    int washed_hand;
    cin >> n >> m;
    washed_hand = 0;
    ans = 0;
    for (int i=0; i<n; i++){
        cin >> h;
        washed_hand += h;
        ans = i;
        if (washed_hand > m){
            ans--;
           break;
        }
    }

    cout << ans + 1 << endl;

    return 0;

}