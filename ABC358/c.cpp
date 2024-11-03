#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    string s;
    int popcorn;
    int shop_cnt;
    int ans;
    vector<int> shops(n);

    for(int i=0; i<n; i++){
        cin >> s;
        replace(s.begin(), s.end(), 'o', '1');
        replace(s.begin(), s.end(), 'x', '0');
        shops[i] = stoi(s, 0, 2);
    }

    ans = n+1;

    for(int bit=1; bit<(2<<n); bit++){
        popcorn = 0;
        shop_cnt = 0;
        
        for(int i=0; i<n; i++){
            if(bit>>i & 1){
                popcorn = popcorn | shops[i];
                shop_cnt++;
            }
        }

        if(__builtin_popcount(popcorn) == m) ans = min(ans, shop_cnt);
        
    }

    cout << ans << endl;
    
    return 0;

}