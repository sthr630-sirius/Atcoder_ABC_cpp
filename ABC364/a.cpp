#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool is_eatable;
    vector<string> dish(n);

    is_eatable = true;
    for(int i=0; i<n; i++) cin >> dish[i];
    
    for(int i=0; i<n-2; i++){
        if(dish[i] == "sweet" && dish[i+1] == "sweet") is_eatable = false;
    }

    if(is_eatable) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}