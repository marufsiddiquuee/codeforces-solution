#include <iostream>
#include <vector>
#include <algorithm>
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

        vector<long long> a(n);

        for(auto &x:a)
            cin >> x;
            
            int outcome1=0,outcome2=0;
           if(a[0]>0)
           outcome1++;
           else outcome2++;
           long long sum=0;
           long long mx=a[0];
           for(int l=0;l<n;l++)
           {
             
              if(outcome1 && a[l]<0)
              {
                sum+=mx;
                outcome2=1;
                outcome1=0;
                mx=a[l];
              }
             else  if(outcome2 && a[l]>0)
              {
                sum+=mx;
                outcome1=1;
                outcome2=0;
                mx=a[l];
              }
              mx=max(mx,a[l]);
           } 
            cout << sum+max(mx,a[n-1]) << endl;
 
    }
}