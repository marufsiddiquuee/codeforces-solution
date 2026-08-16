#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string team1, team2, s;
    cin >> team1;

    int count1 = 1, count2 = 0;

    for (int i = 1; i < n; i++) {
        cin >> s;

        if (s == team1)
            count1++;
        else {
            team2 = s;
            count2++;
        }
    }

    if (count1 > count2)
        cout << team1;
    else
        cout << team2;

    return 0;
}