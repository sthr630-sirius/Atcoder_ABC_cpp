#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, k, x;
    int a_idx;
    cin >> n >> k >> x;
    vector<int> a(n), b;
    
    for(int i=0; i<n; i++) cin >> a[i];
    a_idx = 0;
    for(int i=0; i<n+1; i++){
        if(i==k){
            b.push_back(x);
        }else{
            b.push_back(a[a_idx]);
            a_idx++; 
        }
    }

    for(auto ele:b) cout << ele << " ";

    return 0;
}