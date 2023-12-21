#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> s;
    int n;
    int element;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> element;
        s.insert(element);
    }
    cout << s.size();
    return 0;
}