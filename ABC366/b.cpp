#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    int m;
    int j_max;
    string t_str;
    cin >> n;

    vector<string> s(n);
    vector<string> t;

    m = 0;

    for(int i=0; i<n; i++){
        cin >> s[i];
        if(s[i].length() >= m) m = s[i].length();
    }

    for(int i=0; i<n; i++){
        j_max = m - s[i].length();
        for(int j=0; j<j_max; j++){
            s[i].push_back('*');
        }
    }

    reverse(s.begin(), s.end());

    for(int j=0; j<m; j++){
        t_str = "";
        for(int i=0; i<n; i++){
            t_str.push_back(s[i][j]);
        }
        t.push_back(t_str);
    }

    for(int i=0; i<m; i++){
        for(int j=n-1; j>=0; j--){
            if(t[i][j] == '*') t[i].pop_back();
            else break;
        }
        cout << t[i] << endl;
    }

    return 0;

}