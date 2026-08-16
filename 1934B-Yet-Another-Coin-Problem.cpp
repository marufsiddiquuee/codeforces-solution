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
      int n;
      cin >> n;
      
      int ans=1e9;
      
      for(int i=0;i<=min(10,n/15);i++)
      {
         int f=n/15-i;
         int rem=n-f*15;
         int c=f;
         
         if(rem==12)
         {
            c+=2;
         }
         else
         {
            c+=rem/10;
            rem%=10;
            
            c+=rem/6;
            rem%=6;
            
            c+=rem/3;
            rem%=3;
            
            c+=rem;
         }
         
         ans=min(ans,c);
      }
      
      cout<<ans<<endl;
   }
}