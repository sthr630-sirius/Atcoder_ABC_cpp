#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, x;
    int a, b;
    cin >> n >> x;
    vector<vector<int>> jump(n+1, vector<int>(n*x+1, 0));

    jump[0][0] = 1;

    for(int i=1; i<n+1; i++){
        cin >> a >> b;
        for(int j=1; j<n*x+1; j++){
            if(j-a >= 0 && jump[i-1][j-a] == 1) jump[i][j] = 1;
            if(j-b >= 0 && jump[i-1][j-b] == 1) jump[i][j] = 1;
        }
    }

    if(jump[n][x] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    /*
    for(auto ji : jump){
        for(auto jij: ji) cout << jij << " ";
        cout << endl;
    }
    */

    return 0;

}