#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int binary_search_lower(vector<int>& arr, int target){
    int l, r, m;
    l = -1;
    r = arr.size();

    while(r-l>1){
        m = (l+r)/2;
        if(target <= arr[m]){
            r = m;
        }else{
            l = m;
        }
    }

    return r;
}

int binary_search_upper(vector<int>& arr, int target){
    int l, r, m;
    l = -1;
    r = arr.size();

    while(r-l>1){
        m = (l+r)/2;
        if(arr[m] <= target){
            l = m;
        }else{
            r = m;
        }
    }

    return l;
}

int main(){
    int n, t;
    string s;
    int target;
    int l_idx, u_idx;
    int ans;
    cin >> n >> t;
    cin >> s;
    vector<int> x(n);
    vector<int> zero, one;
    for(int i=0; i<n; i++) cin >> x[i];

    for(int i=0; i<n; i++){
        if(s[i] == '0') zero.push_back(x[i]);
        if(s[i] == '1') one.push_back(x[i]);
    }
    sort(zero.begin(), zero.end());
    sort(one.begin(), one.end());

    ans = 0;

    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            if(x[i] >= one[0]){
                u_idx = binary_search_upper(one, x[i]); 
                l_idx = binary_search_lower(one, x[i]-2*t);
               
                ans += (u_idx - l_idx + 1);
            }
        }
        if(s[i] == '1'){
            if(x[i] <= zero[zero.size()-1]){
                u_idx = binary_search_upper(zero, x[i]+2*t);
                l_idx = binary_search_lower(zero, x[i]);

                ans += (u_idx - l_idx + 1);
            }
        }
    }

    cout << ans/2 << endl;

    return 0;
}