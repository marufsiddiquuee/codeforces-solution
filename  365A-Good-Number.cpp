#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;

    while (n--) {
        string s;
        cin >> s;

        int cnt = 0;

        for (int d = 0; d <= k; d++) {
            int f= 0;

            for (int i = 0; i < s.size(); i++) {
                if (s[i] == char('0' + d)) {
                    f= 1;
                    break;
                }
            }

            cnt += f;
        }

        if (cnt == k + 1)
            ans++;
    }

    cout << ans << endl;
}