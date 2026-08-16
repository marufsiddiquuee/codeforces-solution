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
    
    int m=1;
    for(int i=0;i<n;i++)
    {
      if(!binary_search(a.begin(),a.end(),m))
      {
         cout << m << endl;
         return 0;
      }
      m++;
    }
    cout << a[n-1]+1 << endl;
}