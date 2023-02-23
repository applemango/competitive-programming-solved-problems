/*
 * WorstでO(n^2)なのでMerge sortを使うべきだった
 * (N, Q) = (5, 7) の時は局所的にやるしかなさそう
 * 
 * Testset1: AC * 10
 * Testset2: AC * 6, WA * 4
 * Testset3: AC * 29, WA * 21
 * 
 * https://atcoder.jp/contests/practice/tasks/practice_2
 */

#include <iostream>
#include <string>

using namespace std;

bool getBool(char a, char b, string arr) {
    cout << "? " << a << " " << b << endl;
    fflush(stdout);
    string ans; cin >> ans;

    if(ans == "<")
        return true;
    return false;
}

int partition(string &arr, int low, int high) {
    char pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        //if (arr[j] <= pivot) {
        if(getBool(arr[j], pivot, arr)) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(string &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int N, Q; cin >> N >> Q;
    //string strAlphabets("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string str_alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //string alphabets[N];
    string alphabets = str_alphabets.substr(0, N);
    
    quickSort(alphabets, 0, N - 1);

    //for (int i = 0; i < N; i++)
    //    alphabets[i] = str_alphabets[i];
    printf("! %s\n", alphabets.c_str());
    //for (int i = 0; i < (sizeof(alphabets) / sizeof(alphabets[0])); i++)
    //    cout << alphabets[i];
    //cout << endl;
    

    return 0;
    //quickSort()
    //char alphabets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //int alphabets_size = 27;
    //cout << alphabets[0] << alphabets_size << endl;
}