/*
 * All: AC * 13
 *
 * https://atcoder.jp/contests/dp/tasks/dp_c
 */
#include <iostream>
#include <algorithm>

using namespace std;

long long a[100010];
long long b[100010];
long long c[100010];

long long dp[100010][3];

int smax(long long &x, long long y) {
    if(x < y) {
        x = y;
        return 1;
    };
    return 0;
}

int main() {
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
        dp[i][0] = 0;
        dp[i][1] = 0;
        dp[i][2] = 0;
    };

    if (N == 1) {
        cout << max({a[0], b[0], c[0]}) << endl;
        return 0;
    }

    for (int i = 1; i < N; i++) {
        smax(dp[i][0], b[i - 1] + a[i]);
        smax(dp[i][0], c[i - 1] + a[i]);

        smax(dp[i][1], a[i - 1] + b[i]);
        smax(dp[i][1], c[i - 1] + b[i]);

        smax(dp[i][2], a[i - 1] + c[i]);
        smax(dp[i][2], b[i - 1] + c[i]);

        a[i] = dp[i][0];
        b[i] = dp[i][1];
        c[i] = dp[i][2];
    }

    cout << max({dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]}) << endl;

    return 0;
}