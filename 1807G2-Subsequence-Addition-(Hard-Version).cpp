#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
     while(t--)
     {
         int n;
         cin >> n;
         
         vector<long long> a(n);
         
         for(int i=0;i<n;i++)
         cin >> a[i];
         sort(a.begin(),a.end());
         if(a[0]!=1)
         {
           cout << "NO" << endl;
           continue;
         }
         long long sum=1;
         int f=0;
         for(int i=1;i<n;i++)
         {
            if(a[i]>sum)
            {
              f++;
               break;
            }
            sum+=a[i];
         }
         
         if(f) cout << "NO" << endl;
         else cout << "YES" << endl;
         
       }
       
       }
       
     
     
     