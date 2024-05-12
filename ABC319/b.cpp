#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> divisor;
    int ans;
    bool is_exit;
    for (int i=1; i<10; i++){
        if (n%i == 0){
            divisor.push_back(i);
        }
    }

    for (int i=0; i<=n; i++){
        //cout << "i:" << i << endl;
        is_exit = false;
        for (auto d:divisor){
            if (i%(n/d) == 0){
                cout << d;
                is_exit = true;
                break;
            }
        }
        if (!is_exit){
            cout << "-";
        }
    }

    cout << endl;

    return 0;

}