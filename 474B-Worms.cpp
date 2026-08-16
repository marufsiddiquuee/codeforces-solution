#include <iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<long long> a(n);
    
    for(int i=0;i<n;i++)
    {
       cin >> a[i];
       
       if(i!=0)
       a[i]+=a[i-1];
    }
    
    int m;
    cin >> m;
    
    while(m--)
    {
       int q;
       cin >> q; 
       
        cout << lower_bound(a.begin(),a.end(),q) -a.begin()+1<< endl;
    
    }
}