#include<iostream>
using namespace std;
int main(){
    int n, s, m, l;
    int max_6pack, max_8pack, max_12pack;
    long long egg, cost, ans;
    cin >> n >> s >> m >> l;
    max_6pack = n/6+1;
    max_8pack = n/8+1;
    max_12pack = n/12+1;
    ans = 999999999;

    for (int i=0; i<=max_6pack; i++){
        for (int j=0; j<=max_8pack; j++){
            for (int k=0; k<=max_12pack; k++){
                egg = 6*i + 8*j + 12*k;
                if (egg >= n){
                    cost = s*i + m*j + l*k;
                    ans = min(ans, cost);
                }
            }
        }
    }

    cout << ans << endl;
    return 0;

}