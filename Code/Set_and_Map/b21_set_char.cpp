#include <bits/stdc++.h>
using namespace std;


int main() {
    set<char> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        char c;
        cin >> c;
        s.insert(c);
    }
    cout << s.size() << endl;
    for (set<char>::iterator i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    for  (set<char>::reverse_iterator ri = s.rbegin(); ri != s.rend(); ri++){
        cout << *ri << " ";
    }
    return 0;
}
