#include <iostream>
#include <vector>

using namespace std;

int matrix[5][5];

int main() {
    pair<int, int> onePos = make_pair(-1, -1);

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                onePos.first = i;
                onePos.second = j;
            }
        }
    }
    int xdist = 2 - onePos.first;
    int ydist = 2 - onePos.second;

    if(xdist < 0) {
        xdist *= -1;
    }
    if(ydist < 0) {
        ydist *= -1;
    }

    cout << xdist + ydist << "\n";

    return 0;
}
