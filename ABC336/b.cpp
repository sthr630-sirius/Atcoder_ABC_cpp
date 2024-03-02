#include<iostream>
#include<bitset>
using namespace std;
int main(){
    long long n;
    string binary;
    int ans;
    cin >> n;
    binary = bitset<32>(n).to_string();
    ans = 0;

    for (int i=binary.size()-1; i>=0; i--){
        if (binary[i] == '0') ans++;
        else break;
   }

    cout << ans << endl;

    return 0;
}