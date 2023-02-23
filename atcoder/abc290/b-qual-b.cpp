/*
 * Sample: AC * 1
 * All: AC * 45
 * 
 * https://atcoder.jp/contests/abc290/tasks/abc290_b
 */
# include <iostream>

using namespace std;

int main() {
    int N, K; cin >> N >> K;
    string S; cin >> S;

    int success = 0;

    for (int i = 0; i < N; i++) {
        if(success >= K)
            S[i] = 'x';
        if(S[i] == 'o')
            success++;
    };

    cout << S << endl;

    return 0;
}