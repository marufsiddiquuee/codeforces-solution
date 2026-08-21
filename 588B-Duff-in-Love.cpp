#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n;

   cin >> n;

   for(long long i=2;i*i<=n;)
   {
      if(n%(i*i)==0)
      {
        n=n/i;
      }
      else i++;
   }

   cout << n;


}