#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> A;
    vector<int> B(n+1);
    int a;
    int swap_idx_a, swap_idx_b;
    int ans;
    vector<vector<int>> record;

    for (int i=1; i<=n; i++){
        cin >> a;
        A[a] = i;
        B[i] = a;
    }

    ans = 0;

    for (int i=1; i<=n; i++){
        swap_idx_a = i;
        swap_idx_b = A[swap_idx_a];

        if (A[swap_idx_a] != swap_idx_a){

            swap(A[swap_idx_a], A[B[swap_idx_a]]);
            swap(B[swap_idx_a], B[swap_idx_b]);
            
            record.push_back({swap_idx_a, swap_idx_b});
            
            ans++;
        }
    }

    cout << ans << endl;
    for (int i=0; i<ans; i++){
        cout << record.at(i).at(0) << " " << record.at(i).at(1) << endl;
    }

    return 0;
}