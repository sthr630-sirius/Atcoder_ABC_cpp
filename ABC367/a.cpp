#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(b<=c){
        if(a<b or c<=a) cout << "Yes" << endl;
        else cout << "No" << endl;
    }else{
        if(a<b and c<=a) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
    
}