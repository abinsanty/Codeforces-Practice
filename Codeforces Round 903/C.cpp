#include <iostream>

using namespace std;

int t, n;

void solve() {

}

int main() {
    cin >> t >> n;
    int matrix[n][n];

    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    solve();
    return 0;
}
