#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> laptop(n);

    for(int i = 0; i < n; i++)
    {
        cin >> laptop[i].first >> laptop[i].second;
    }

    sort(laptop.begin(), laptop.end());

    for(int i = 0; i < n-1; i++)
    {
        if(laptop[i].second > laptop[i+1].second)
        {
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";

    return 0;
}