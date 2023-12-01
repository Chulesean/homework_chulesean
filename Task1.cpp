#include <iostream>
using namespace std;

int a[1000];
int track[1000];

void genPermutation(int k, int n, int tmp[]) {
    if (k == n) {
        for (int i = 0; i < n; i++) {
            cout << tmp[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if (track[i] == 0) {
            tmp[k] = a[i];
            track[i] = 1;
            genPermutation(k + 1, n, tmp);
            track[i] = 0;
        } else {
            continue;
        }
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        track[i] = 0; // Corrected initialization
    }

    int tmp[1000];
    genPermutation(0, n, tmp);

    return 0;
}
