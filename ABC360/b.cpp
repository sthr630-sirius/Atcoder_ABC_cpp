#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s, t, ans;
    vector<string> slice_s;
    cin >> s >> t;
    int w;

    for(int w=1; w<s.size(); w++){
        slice_s.clear();
        for(int i=0; i<s.size(); i+=w){
            slice_s.push_back(s.substr(i, w));
        }
        
        for(int j=0; j<slice_s[0].size(); j++){
            ans = "";
            for(int i=0; i<slice_s.size(); i++){
                if(j<slice_s[i].size()){
                    ans += slice_s[i][j];
                }
            }

           if(ans == t){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}