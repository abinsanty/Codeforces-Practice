#include <iostream>

using namespace std;

string s;

void solve() {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') {
            cout << '0';
        } else {
            if(s[i + 1] == '.') {
                cout << '1';
                i++;
            } else {
                cout << '2';
                i++;
            }
        }
    }
    cout << "\n";
}

int main() {
    
    cin >> s;
    solve();

    return 0;
}
