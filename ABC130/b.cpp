#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, x;
    int now_step;
    int ans;
    cin >> n >> x;
    vector<int> l(n);
    vector<int> step(1000000);

    for (int i=0; i<n; i++){
        cin >> l[i];
    }

    ans = 0;
    now_step = 0;
    step[now_step] = 1;

    for (int i=0; i<n; i++){
        now_step = now_step + l[i];
        //cout << now_step << endl;
        step[now_step] = 1;
    }

    for(int i=0; i<=x; i++){
        if (step[i] == 1){
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}