/*
 * 28行目のiをはじめi+1にしててAllがAC*21,WA*41で何をミスったか分からず20分くらいどぶに捨てたのはここだけの話
 * なんでか分からない時は高確率で凡ミスしてる
 *  
 * Sample: AC * 1
 * All: AC * 62
 *  
 * https://atcoder.jp/contests/abc290/tasks/abc290_c
 */
# include <iostream>

using namespace std;

long long A[300010];
long long nums[300010];

int main() {
    int N, K; cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++) {
        if(K < A[i])
            continue;
        nums[A[i]]++;
    }

    for (int i = 0; i < K; i++) {
        if(nums[i] == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << K << endl;

    return 0;
}