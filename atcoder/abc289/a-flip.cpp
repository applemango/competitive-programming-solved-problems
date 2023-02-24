/*
 * Sample: AC * 3
 * All: AC * 8
 * 
 * https://atcoder.jp/contests/abc289/tasks/abc289_a
 */
#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }

    cout << s << endl;

    return 0;
}