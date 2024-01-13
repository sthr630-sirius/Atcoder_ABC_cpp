#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main(){
    int n, tmp;
    bool is_ascend;
    cin >> n;
    vector<int> p(n), target(n);

    for (int i=0; i<n; i++) cin >> p[i];

    for (int i=0; i<n-1; i++){
        for (int j=i; j<n; j++){
            for (int k=0; k<n; k++) target[k] = p[k];
            
            tmp = target[i];
            target[i] = target[j];
            target[j] = tmp;

            is_ascend = true;

            for (int k=0; k<n-1; k++){
                if(target[k]>target[k+1]){
                    is_ascend = false;
                }
            }

            if (is_ascend){
                cout << "YES" << endl;
                exit(0);
            }
        }
    }
    
    cout << "NO" << endl;
    return 0;
}