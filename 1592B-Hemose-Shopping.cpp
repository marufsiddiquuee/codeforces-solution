#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cmath>
#include<set>
using namespace std;

////https://codeforces.com/problemset/problem/1592/B
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,x;
        cin >> n >> x;

        vector<int> a(n),b(n);

        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }

        sort(b.begin(),b.end());

        if(2*x<=n)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool ok=true;

            for(int i=n-x;i<x;i++)
            {
                if(a[i]!=b[i])
                {
                    ok=false;
                    break;
                }
            }

            if(ok)
                cout << "YES" <<endl;
            else
                cout << "NO" <<endl;
        }
    }

    return 0;
}