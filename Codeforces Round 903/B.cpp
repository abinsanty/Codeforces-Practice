#include <iostream>

int t, a, b, c;
using namespace std;

void solve() {
    if(a == b && b == c && a == c) {
        cout << "YES\n";
        return;
    }
    int o = 0;
    while(o < 3) {
        
    }
}

int main() {
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        solve();
    }
    return 0;
}
