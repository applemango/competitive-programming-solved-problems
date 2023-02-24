/*
 * All: AC * 11
 * 
 * https://atcoder.jp/contests/dp/tasks/dp_a
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
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> H[i];
        dp[i] = INF;
    };
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        mins(dp[i + 1], abs(H[i] - H[i + 1]) + dp[i]);
        mins(dp[i + 2], abs(H[i] - H[i + 2]) + dp[i]);
    }

    cout << dp[N - 1] << endl;

    return 0;
}