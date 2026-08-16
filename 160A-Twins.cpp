#include <iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(auto &x:a)
    cin >> x;
    
    sort(a.begin(),a.end(),greater<int>());
    int sum1=accumulate(a.begin(),a.end(),0);
    int sum2=0;
    
    for(int i=0;i<n;i++)
    {
       sum2+=a[i];
       sum1-=a[i];
       
       if(sum2>sum1)
       {
          cout << i+1 << endl;
         break;
       
       }
    }
    
    }