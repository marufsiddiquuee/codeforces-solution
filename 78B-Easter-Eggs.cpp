#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string a = "ROYGBIV", b="GBIV";
    cout << a;
    n-=7;
    while(n>=4)
    {
     cout << b;
     n-=4;
    }
    
    if(n==3)
    cout << "GBI";
    else if(n==2)
    cout << "GB";
    else if(n==1)
     cout << "G";

}