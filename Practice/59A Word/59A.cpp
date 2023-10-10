#include <iostream>
#include <string>
#include <string.h>
#include <cctype>

using namespace std;

string s;
void solve() {
    int caseCount = 0;
    for(int i = 0; i < s.size(); i++) {
        if(isupper(s[i])) {
            caseCount++;
        } else {
            caseCount--;
        }
    }
    
    if(caseCount > 0) {
        for(int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for(int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }

}

int main() {
    cin >> s;
    solve();
    cout << s << "\n";
    return 0;
}
