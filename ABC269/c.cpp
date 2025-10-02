#include<iostream>
#include<bitset>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    unsigned long long n;
    cin >> n;

    vector<int> pos;
    bitset<60> bin_n(n);

    for(int i=0; i<60; i++){
        //if(bin_n[i]) pos.push_back(i);
        if(n & (1ULL<<i)) pos.push_back(i);
    }

    unsigned long long ans;

    for(int bit=0; bit<(1<<pos.size()); bit++){
        ans = 0;
        for(int i=0; i<pos.size(); i++){
            if(bit & (1<<i)) ans += 1ULL<<pos[i];
        }
        cout << ans << endl;
    }

    for(auto posi:pos) cout << posi << ", ";
    cout << endl;

    return 0;

}