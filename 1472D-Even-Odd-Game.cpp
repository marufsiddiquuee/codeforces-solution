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
      
      vector<long long> arr(n);
      
      for(int i=0;i<n;i++)
      cin >> arr[i];
      
      sort(arr.begin(),arr.end(),greater<long long>());
      long long a=0,b=0;
      
      for(int i=0;i<n;i++)
      {
          if(i%2==0 && arr[i]%2==0)
          a+=arr[i];
          
          else if(i%2==1 && arr[i]%2==1) 
          b+=arr[i];
      }
      
      if(a>b)
      cout << "Alice" << endl;
      
      else if(a<b)
      cout << "Bob" << endl;
      
      else cout << "Tie" << endl;
      
      
    }
    
    
    }