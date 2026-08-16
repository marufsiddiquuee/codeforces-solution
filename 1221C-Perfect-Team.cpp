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
       int c,m,x;
       cin >> c >> m >> x;
       
       int k=(c+m+x)/3;
       
       cout << min({c,m,k}) << endl;
   }
   
   }