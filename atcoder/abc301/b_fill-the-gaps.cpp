/*
 * All: AC * 10
 *
 * https://atcoder.jp/contests/abc301/tasks/abc301_b
 */
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int A[110];

string to(int x, int y, string s = "") {
    if (x == y) return s;
    if (x < y) {
        if (s == "") return to(x + 2, y, std::to_string(x + 1) + " ");
        return to(x + 1, y, s + std::to_string(x) + " ");
    }
    if (s == "") return to(x - 2, y, std::to_string(x - 1)  + " ");
    return to(x - 1, y, s + std::to_string(x) + " ");
}

int main() {
    int N; cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    string s = "";
    for (int i = 0; i < N - 1; i++) {
        if (std::abs(A[i] - A[i + 1]) > 1) {
            s += std::to_string(A[i]) + " " + to(A[i], A[i + 1]);
            continue;
        }
        s += std::to_string(A[i]) + " ";
    }
    s += std::to_string(A[N - 1]);
    cout << s << endl;
}