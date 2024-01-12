#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n, d, l;
    cin >> n >> d;
    int ans;
    vector<vector<int>> x(n, vector<int>(d));
    
    ans = 0;

    for (int i=0; i<n; i++){
        for (int j=0; j<d; j++){
            cin >> x[i][j];
        }
    }

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            l = 0;
            for (int k=0; k<d; k++){
                l += pow(x[i][k] - x[j][k], 2.0);
            }

            if (sqrt(l) - int(sqrt(l)) == 0){
                ans += 1;
            }
        }
    }

    cout << ans << endl;

    return 0;
}