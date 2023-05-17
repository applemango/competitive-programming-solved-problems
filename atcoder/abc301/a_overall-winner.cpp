/*
 * All: AC * 15
 *
 * https://atcoder.jp/contests/abc301/tasks/abc301_a
 */
#include <iostream>

using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;

    int T =0;
    int A =0;
    char last = 'T';

    for(int i=0; i<N; i++){
        char n = S[i];
        if (n == 'T') {
            T++;
            last = 'A';
            continue;
        }
        A++;
        last = 'T';
    }
    if (T > A) {
        cout << "T" << endl;
        return 0;
    }
    if (T == A) {
        cout << last << endl;
        return 0;
    }
    cout << "A" << endl;

    return 0;
}