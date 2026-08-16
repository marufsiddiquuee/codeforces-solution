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
   long long zero=count(a.begin(),a.end(),0);
   long long pair=zero*(zero-1)/2;
   for(int f=10;f>0;f--)
   {
      long long cnt1=count(a.begin(),a.end(),f);
      long long cnt2=count(a.begin(),a.end(),(-1*f));
      
      if(cnt1 && cnt2)
      pair+=(cnt1*cnt2);
   }
   
   
   cout << pair;
}