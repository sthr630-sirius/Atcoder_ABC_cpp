#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n;
    long long x, tmp_x;
    string s;
    cin >> n >> x;
    vector<char> move;
    cin >> s;

    long long row_idx, column_idx;
    long long a;

    move.push_back('U');

    for(int i=0; i<n; i++){
        if(move.back() != 'U' && s[i] == 'U'){
            move.pop_back();
        }else{
            move.push_back(s[i]);
        }
    }

    row_idx = 0;
    tmp_x = x;

    while(tmp_x >= 2){
        tmp_x /= 2;
        row_idx++;
    }
    
    a = pow(2, row_idx);
    column_idx = x%a;

    for(int i=1; i<move.size(); i++){
        if(move[i] == 'U'){
            row_idx--;
            column_idx /= 2;
        }else if(move[i] == 'L'){
            row_idx++;
            column_idx *= 2;
        }else{
            row_idx++;
            column_idx = column_idx * 2 + 1;
        }
    }

    a = pow(2, row_idx);
    cout << a + column_idx << endl;

    return 0;

}