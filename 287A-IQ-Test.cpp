#include <iostream>
using namespace std;

int main() {
    string g[4];
    for (int i = 0; i < 4; i++) cin >> g[i];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            int c = (g[i][j] == '#') +
                    (g[i][j + 1] == '#') +
                    (g[i + 1][j] == '#') +
                    (g[i + 1][j + 1] == '#');

            if (c != 2) {
                cout << "YES";
                return 0;
            }
        }

    cout << "NO";
}