#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   
   sort(s.begin(),s.begin()+n);
   sort(s.begin()+n,s.end());
   
   int f=0;
   int cnt1=0,cnt2=0,cnt3=0;
   for(int i=0,j=n;i<n;i++,j++)
   {
       if(s[i]>s[j])
           cnt1++;
       
       else if(s[i]<s[j])
       cnt2++;
       
       else cnt3++;
       if((cnt1 && cnt2)||cnt3)
       {
          f++;
          break;
       
       }
   
   
   }
   if(f) cout << "NO" << endl;
   else cout << "YES" << endl;
}