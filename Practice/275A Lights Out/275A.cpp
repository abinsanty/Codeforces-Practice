#include <iostream>

using namespace std;

int lights[3][3] = {
    {1,1,1},
    {1,1,1},
    {1,1,1}
};

int presses[3][3];

void flip(int i, int j) {
    lights[i][j] = lights[i][j] * -1 + 1;
}

void solve() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            while(presses[i][j]) {
                if(i == 0) {
                    if(j == 0) {
                        flip(i, j);
                        flip(i + 1, j);
                        flip(i, j + 1);
                    } else if(j == 2) {
                        flip(i, j);
                        flip(i + 1, j);
                        flip(i, j - 1);
                    } else {
                        flip(i, j);
                        flip(i, j - 1);
                        flip(i, j + 1);
                        flip(i + 1, j);
                    }
                } else if(i == 2) {
                    if(j == 0) {
                        flip(i, j);
                        flip(i - 1, j);
                        flip(i, j + 1);
                    } else if(j == 2) {
                        flip(i, j);
                        flip(i - 1, j);
                        flip(i, j - 1);
                    } else {
                        flip(i, j);
                        flip(i, j - 1);
                        flip(i, j + 1);
                        flip(i - 1, j);
                    }
                } else {
                    if(j == 0) {
                        flip(i, j);
                        flip(i - 1, j);
                        flip(i + 1, j);
                        flip(i, j + 1);
                    } else if(j == 2) {
                        flip(i, j);
                        flip(i - 1, j);
                        flip(i + 1, j);
                        flip(i, j - 1);
                    } else {
                        flip(i, j);
                        flip(i, j - 1);
                        flip(i, j + 1);
                        flip(i - 1, j);
                        flip(i + 1, j);
                    }
                }
                presses[i][j]--;
            }
        }
    }
}

int main() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> presses[i][j];
        }
    }


    solve();

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << lights[i][j];
        }
        cout << "\n";
    }

    return 0;
}
