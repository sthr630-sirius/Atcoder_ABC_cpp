#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, x;
    int score;
    int min_score, max_score;
    int tmp;

    cin >> n >> x;
    vector<int> a(n-1);
    
    for (int i=0; i<n-1; i++) cin >> a[i];
  
    sort(a.begin(), a.end());
    min_score = a[0];
    max_score = a[n-2];

    score = 0;
    for (int i=1; i<n-2; i++) score += a[i];

    for (int i=0; i<=100; i++){
        if (i < min_score) tmp = min_score;
        else if ((min_score <= i) && (i <= max_score)) tmp = i;
        else if (max_score < i) tmp = max_score;

        score += tmp;

        if (x <= score){
            cout << i << endl;
            return 0;
        } else{
            score -= tmp;
        }
    }

    cout << -1 << endl;

    return 0;

}