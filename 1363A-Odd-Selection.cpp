#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,x;
        cin >> n >> x;

        int odd=0,even=0;

        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;

            if(a%2)
                odd++;
            else
                even++;
        }

        bool ok=false;

        for(int i=1;i<=min(odd,x);i+=2)
        {
            if(x-i<=even)
            {
                ok=true;
                break;
            }
        }

        if(ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}