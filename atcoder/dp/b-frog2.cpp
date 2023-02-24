/*
 * All: AC * 16
 * 
 * https://atcoder.jp/contests/dp/tasks/dp_b
 */
#include <iostream>

using namespace std;

const long long INF = 1LL << 60;

long long H[100010];
long long dp[100010];

int mins(long long &x, long long y) {
    if(x > y) {
        x = y;
        return 1;
    };
    return 0;
}

int main() {
    int N, K; cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> H[i];
        dp[i] = INF;
    };
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            mins(dp[i + j], abs(H[i] - H[i + j]) + dp[i]);
        }
    }

    cout << dp[N - 1] << endl;

    return 0;
}