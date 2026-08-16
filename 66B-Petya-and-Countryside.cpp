#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int cnt = 1;

        
        for (int j = i; j > 0; j--) {
            if (a[j - 1] <= a[j])
                cnt++;
            else
                break;
        }

        
        for (int j = i; j < n - 1; j++) {
            if (a[j + 1] <= a[j])
                cnt++;
            else
                break;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
}