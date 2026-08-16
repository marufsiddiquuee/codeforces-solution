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
   
   vector<int> a(n);
   for(auto &x:a)
   cin >> x;
   
   sort(a.begin(),a.end());
   long long int minimum =0;
   for(int i=0;i<n;i++)
     minimum+=abs(1LL*a[i]-(i+1));
   
   cout << minimum;
}