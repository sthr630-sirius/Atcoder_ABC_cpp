#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    int a;
    int first, score;
    cin >> n >> m;
    vector<int> person(n+1, 0);

    first = 0;
    score = 0;

    for (int i=0; i<m; i++){
        cin >> a;
        person[a]++;
        if (person[a] > score){
            score = person[a];
            first = a;
        } else if (person[a] == score){
            first = min(first, a);
        }

        cout << first << endl;
    }

    return 0; 

}