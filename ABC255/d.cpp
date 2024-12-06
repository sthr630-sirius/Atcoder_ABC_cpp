#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int upper(vector<int> &a, int x){
    int l, r, mid;
    l = -1;
    r = a.size();
    while(l+1 < r){
        mid = (l+r) / 2;
        if(a[mid] < x) l = mid;
        else r = mid;
    }

    return l;
}

int lower(vector<int> &a, int x){
    int l, r, mid;
    l = -1;
    r = a.size();
    while(l+1 < r){
        mid = (l+r) / 2;
        if(x < a[mid]) r = mid;
        else l = mid;
    }

    return r;
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<long long> s(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int x;
    int idx_l, idx_r;
    long long add_operation, take_operation;

    sort(a.begin(), a.end());
    s[0] = a[0];

    for(int i=1; i<n; i++) s[i] = (long long) a[i] + s[i-1];

    for(int i=0; i<q; i++){
        cin >> x;
        idx_l = upper(a, x);
        idx_r = lower(a, x);


        if(idx_l == -1){
            add_operation = 0;    
        }else{
            add_operation = (long long)x*(idx_l+1) - s[idx_l];
        }

        if(idx_r == a.size()){
            take_operation = 0;
        }else if(idx_r == 0){
            take_operation = s.back() - (long long)x*(n-idx_r);
        }else{
            take_operation = (s.back()-s[idx_r-1]) - (long long)x*(n-idx_r);
        }
       
        //cout << "add: " << add_operation << endl;
        //cout << "take: " << take_operation << endl;
        cout << add_operation + take_operation << endl;
    }

    return 0;

}