#include <bits/stdc++.h>
using namespace std;

int dem068(int a) {
    int tmp = 16;
    int count = 0;
    while (a != 0) {
        tmp = a % 10;
        a /= 10; // Corrected line
        if (tmp == 6 || tmp == 8 || tmp == 0) {
            count += 1;
        }
    }
    return count;
}

bool cmp068(int a, int b) {
    if (dem068(a) != dem068(b)) {
        return dem068(a) > dem068(b);
    } else {
        return a < b;
    }
}

int main() {
    int N;
    cout << "waiting for input" << endl;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N, cmp068);
    for (int x : A) {
        cout << x << " ";
    }
    return 0;
}
