#include <iostream>

using namespace std;

int y;

void solve() {
    for(++y; y > 0; y++) {
        int ones = y % 10;

        int tens = (y / 10) % 10;

        int hund = (y / 100) % 10;

        int thou = (y / 1000) % 10;

        if(ones == tens || ones == hund || ones == thou) {
            continue;
        } else if(tens == hund || tens == thou) {
            continue;
        } else if(hund == thou) {
            continue;
        }
        cout << y << "\n";
        break;
    }
}

int main() {

    cin >> y;
    solve();

    return 0;
}
