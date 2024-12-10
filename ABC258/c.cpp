#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, q;
    string s;
    int t, x;
    cin >> n >> q;
    cin >> s;

    int header;
    header = 0;

    for(int i=0; i<q; i++){
        cin >> t >> x;
        if(t == 1){
            header = ((header-x)%n+n)%n;
        }else{
            cout << s[(header+x-1)%n] << endl;
        }
    }

    return 0;
    
}