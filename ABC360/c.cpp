#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n, ans;
    int idx;
    cin >> n;
    vector<int> a(n), w(n), box_w(n+1);
    vector<bool> is_blank(n+1);
    
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> w[i];
    ans = 0;

    for(int i=0; i<n; i++) is_blank[i] = true;
    
    for(int i=0; i<n; i++){
        idx = a[i];
        if(is_blank[idx]){
            box_w[idx] = w[i];
            is_blank[idx] = false;
        }else{
            if(box_w[idx] < w[i]){
                ans += box_w[idx];
                box_w[idx] = w[i];
            }else{
                ans += w[i];
            }
        }
    }

    cout << ans << endl;

    return 0;
}