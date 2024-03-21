#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int binary_search(vector<int>& a, int target){
    int l, r;
    int mid;
    l = -1;
    r = a.size();

    while (l+1 < r){
        mid = (l + r)/2;
        if (a[mid] > target) r = mid;
        else l = mid; 
    }

    return r;
}

int main(){
    int n;
    int ans_idx;
    cin >> n;
    vector<int> a(n), sort_a(n);
    vector<long long> s(n, 0);

    for (int i=0; i<n; i++){
        cin >> a[i];
        sort_a[i] = a[i];
    }
    sort(sort_a.begin(), sort_a.end());

    s[n-1] = sort_a[n-1];
    for (int i=n-2; i>=0; i--) s[i] = s[i+1] + sort_a[i]; 
    
    for (int i=0; i<n; i++){
        ans_idx = binary_search(sort_a, a[i]);
        if (ans_idx == n) cout << 0 << endl;
        else cout << s[ans_idx] << endl; 
    }

    return 0;

}