#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    int y,k,n;
    cin >> y >> k >> n;

    int start=((y/k)+1)*k;

    if(start>n)
    {
        cout << -1;
        return 0;
    }

    for(int i=start;i<=n;i+=k)
    cout << i-y << " ";
}