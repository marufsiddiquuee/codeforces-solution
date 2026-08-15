#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cmath>
#include<set>
using namespace std;

////https://codeforces.com/problemset/problem/1763/B
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<pair<long long,long long>> a(n);

        long long mx=0;

        for(int i=0;i<n;i++)
        {
            cin >> a[i].first;
            mx=max(mx,a[i].first);
        }

        for(int i=0;i<n;i++)
            cin >> a[i].second;

        sort(a.begin(),a.end(),[](pair<long long,long long> x,pair<long long,long long> y)
        {
            return x.second<y.second;
        });

        long long damage=0;
        int j=0;

        while(k>0 && damage<mx)
        {
            damage += k;

            while(j<n && a[j].first<=damage)
                j++;

            if(j<n)
                k -= a[j].second;
        }

        if(damage>=mx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}