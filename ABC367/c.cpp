#include<iostream>
#include<vector>
using namespace std;
void product_seq(int& d, int n, int k, vector<int>& digit, vector<int>& seq, int& digit_sum){

    //----------
    /*
    cout << "d: " << d-1 << endl;
    cout << "seq: ";
    for(auto si:seq) cout << si << " ";
    cout << endl;
    cout << "digit_sum: " << digit_sum << endl;
    cout << endl;
    */
    //----------

    if(d == n){
        if(digit_sum%k == 0){
            for(auto si:seq) cout << si << " ";
            cout << endl;
        }

        digit_sum -= seq.back();
        seq.pop_back();
        d--;
        return ;

    }else{
        for(int i=0; i<digit[d]; i++){
            seq.push_back(i+1);
            digit_sum += i+1;
            d++;
            product_seq(d, n, k, digit, seq, digit_sum); 
        }
    }

    digit_sum -= seq.back();
    seq.pop_back();
    d--;

    return;
}


int main(){
    int n, k;
    vector<int> digit;
    int r;
    vector<int> seq;
    int d;
    int digit_sum;

    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> r;
        digit.push_back(r);
    }

    d = 0;
    digit_sum = 0;
    product_seq(d, n, k, digit, seq, digit_sum);

    return 0;
}