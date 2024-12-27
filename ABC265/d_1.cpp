#include<iostream>
#include<vector>
using namespace std;
using ll = long long;

int binary_search(vector<ll> &a, ll x, int idx_s){
    int l, r, mid;
    l = idx_s-1;
    r = a.size();
    while(l+1 < r){
        mid = (l+r)/2;
        if(a[mid]-a[idx_s-1] <= x) l = mid;
        else r = mid; 
    }
    
    return r;
}

int main(){
    int n;
    ll P, Q, R;
    cin >> n >> P >> Q >> R;
    vector<int> a(n+1);
    vector<ll> s(n+1);
    int y, z, w;
    bool is_ok;
    
    a[0] = 0;
    s[0] = a[0];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    
    /*
    for(auto ai:a) cout << ai << " ";
    cout << endl;
    for(auto si:s) cout << si << " ";
    cout << endl;
    */

    is_ok = false;
    y = 1;

    for(int x=1; x<=n; x++){
        while(y<=n && s[y-1]-s[x-1]<=P){
            if(s[y-1]-s[x-1] == P){
                //cout << "[x, y) = [" << x << ", " << y << ") " << endl;
                z = binary_search(s, Q, y);

                if(s[z-1]-s[y-1] == Q){
                    w = binary_search(s, R, z);

                    if(s[w-1]-s[z-1] == R){
                        //cout << "(x, y, z, w) = " << x-1 << ", "<< y-1 << ", " << z-1 << ", " << w-1 << endl;
                        is_ok = true;
                    }
                }
            }
            y++;
        }
    }

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}