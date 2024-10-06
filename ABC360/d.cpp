#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    long long t;
    string s;
    long long ans, j_min, j_max;
    cin >> n >> t;
    cin >> s;
    vector<long long> x(n);
    vector<long long> r_ant, l_ant;

    for(int i=0; i<n; i++) cin >> x[i];
    for(int i=0; i<n; i++){
        if(s[i] == '1') r_ant.push_back(x[i]);
        if(s[i] == '0') l_ant.push_back(x[i]);
    }

    sort(r_ant.begin(), r_ant.end());
    sort(l_ant.begin(), l_ant.end());

    ans = 0;
    j_min = 0;
    j_max = 0;

    for(int i=0; i<r_ant.size(); i++){
        while(r_ant[i] > l_ant[j_min] && j_min < l_ant.size()) j_min++;
        while(l_ant[j_max] <= r_ant[i] + 2*t && j_max < l_ant.size()) j_max++;

        ans += (j_max - j_min);

    }

    cout << ans << endl;

    return 0;

}