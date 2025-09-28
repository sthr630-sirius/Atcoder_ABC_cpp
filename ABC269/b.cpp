#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 10;
    string s;
    vector<int> row, column;
    for(int i=0; i<n; i++){
        cin >> s;
        for(int j=0; j<n; j++){
            if(s[j] == '#'){
                row.push_back(i+1);
                column.push_back(j+1);
            }
        }
    }

    cout << row[0] << " " << row.back() << endl;
    cout << column[0] << " " << column.back() << endl;

    return 0;
}