#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int a, b, c, d;
    int ans;
    int size_map;
    cin >> n;
    size_map = 10;
    ans = 0;

    vector<vector<int>> map(size_map, vector<int>(size_map));
    
    for (int i=0; i<size_map; i++){
        for (int j=0; j<size_map; j++){
            map[i][j] = 0;
        }
    }

    for (int k=0; k<n; k++){
        cin >> a >> b >> c >> d;
        for (int i=c; i<d; i++){
            for (int j=a; j<b; j++){
                map[i][j] = 1;
            }
        }
    }

    for (int i=0; i<size_map; i++){
        for (int j=0; j<size_map; j++){
            //cout << map[i][j] << " ";
            ans += map[i][j];
        }
        //cout << endl;
    }

    cout << ans << endl;

    return 0;

}