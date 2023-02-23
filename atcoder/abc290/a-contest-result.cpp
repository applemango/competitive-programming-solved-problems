/*
 * Sample: AC * 3
 * All: AC * 15
 * 
 * https://atcoder.jp/contests/abc290/tasks/abc290_a
 */
#include <iostream>

using namespace std;

long long A[110];
long long B[110];

int main() {
    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    int sum = 0;

    for (int i = 0; i < M; i++) sum += A[B[i] - 1];

    cout << sum << endl;

    return 0;
}