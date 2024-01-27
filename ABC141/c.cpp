#include<iostream>
#include<map>
using namespace std;
int main(){
    int n, k, q;
    int a;
    cin >> n >> k >> q;
    map<int, int> score;
    
    for (int i=0; i<q; i++){
        cin >> a;
        score[a] += 1;
    }

    for (int i=1; i<=n; i++){
        if (k-q+score[i] > 0){
            cout << "Yes" << endl; 
        } else{
            cout << "No" << endl;
        }
    }
    
    return 0;

}