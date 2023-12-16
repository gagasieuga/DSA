#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n;

int main() {
    cin >> n;
    int choice;
    for (int i = 0; i < n; i++) {
        cin >> choice;
        if (choice == 1) {
            int element;
            cin >> element;
            v.push_back(element);
        }
        if (choice == 2) {
            if (!v.empty()) {
                v.pop_back();
            }
        }
    }
    
    if (v.empty()) {
        cout << "EMPTY\n";  // Fix the typo in "EMTPY" and use "\n" for a new line
    } else {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";  // Use << instead of + for concatenation
        }
    }

    return 0;
}
