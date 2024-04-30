#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int win;
    string s;
    vector<int> result(n);
    vector<int> ans;

    for (int i=0; i<n; i++){
        cin >> s;
        win = 0;
        for (int j=0; j<n; j++){
            if (s[j] == 'o') win++;
        }

        result[i] = win;
    }

    for (int i=99; i>=0; i--){
        for (int j=0; j<n; j++){
            if (result[j] == i) ans.push_back(j+1);
        }
    }

    for (auto& a:ans){
        cout << a << " ";
    }

    cout << endl;
    
    return 0;

}

/*
int main(){
    int n;
    cin >> n;
    int win;
    string s;
    vector<vector<int>> result(n, vector<int>(n));

    for (int i=0; i<n; i++){
        cin >> s;
        win = 0;
        for (int j=0; j<n; j++){
            if (s[j] == 'o') win++;
        }

        result.at(i).at(0) = win;
        result.at(i).at(1) = i;
    }

    sort(result.rbegin(), result.rend());

    for (auto& r:result){
        cout << r.at(1)+1 << " ";
    }

    cout << endl;

    return 0;

}
*/