#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    vector<int> a(t);
    vector<int> row_bingo(n), column_bingo(n), cross_bingo(2);
    int row, column;
    bool is_bingo;

    for (int i=0; i<t; i++) cin >> a.at(i);

    is_bingo = false;
    
    for (int i=0; i<t; i++){
        row = (a.at(i)-1)/n;
        column = (a.at(i)+n-1)%n;

        row_bingo.at(row)++;
        column_bingo.at(column)++;
        if (row == column) cross_bingo.at(0)++;
        if (row == n-1-column) cross_bingo.at(1)++;

        if (row_bingo.at(row) == n) is_bingo = true;
        if (column_bingo.at(column) == n) is_bingo = true;
        if (cross_bingo.at(0) == n) is_bingo = true;
        if (cross_bingo.at(1) == n) is_bingo = true;

        if (is_bingo){
            cout << i+1 << endl;
            break;
        }
    }

    if (not is_bingo) cout << -1 << endl;

    return 0;

}