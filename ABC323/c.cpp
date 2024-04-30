#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a;
    int max_player_score;
    int delta, ans;
    string s;
    vector<vector <int>> result(n, vector<int> (m));
    vector<pair <int, int>> score(m);
    vector<int> player_score(n, 0);

    for (int i=0; i<m; i++){
        cin >> a;
        score[i] = {a, i};
    }

    for (int i=0; i<n; i++){
        cin >> s;
        for (int j=0; j<m; j++){
            if (s[j] == 'o'){
                player_score[i] += score[j].first;
                result[i][j] = 1;
            } else{
                result[i][j] = 0;
            }
        }
        player_score[i] += i+1;
    }

    max_player_score = *max_element(player_score.begin(), player_score.end());
    sort(score.rbegin(), score.rend());

    for (int i=0; i<n; i++){
        delta = max_player_score - player_score[i];
        ans = 0;
        if (delta == 0){
            cout << 0 << endl;
        } else{
            for (int j=0; j<m; j++){
                if (result[i][score[j].second] == 0){
                    delta -= score[j].first;
                    ans++;
                    if (delta < 0){
                        cout << ans << endl;
                        break;
                    }
                } else{
                    continue;
                }
            }
        }
    }

    return 0;

}