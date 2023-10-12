#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int t, n, m;
string s, x;

void solve() {
    int xlen = n;
    int o = 0;
    int xCount = 0;
    bool sFound = false;
    bool repeat = false;
    int matchS = 0;
    while(!sFound) {
        for(xCount; xCount < xlen; xCount++) {
            matchS = 0;
            while(x[xCount] == s[matchS] && matchS < m) {
                matchS++;
                if(xCount == xlen - 1) {
                    xCount = 0;
                    repeat = true;
                } else {
                    xCount++;
                }
            }
            if(matchS == m && !repeat) {
                cout << o;
                sFound = true;
                break;
            } else if(matchS != m && repeat) {
                cout << -1;
                sFound = true;
                break;
            } else if(matchS == m && repeat) {
                o++;
                string updated = x + x;
                xlen *= 2;
                xCount = 0;
            }
        }
    }
}

int main() {
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> m;
        cin >> x >> s;

        solve();
    }
    return 0;
}
