#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
     while(t--)
     {
       long long n,k;
       cin >> n >>k;
       
       if(n%2==0)
       {
          if(k*k<=n && k%2==0)
          cout << "YES" << endl;
           
           else cout << "NO" << endl;
       
       }
       
       else if(n%2==1)
       {
         if(k%2==1 && k*k<=n)
         cout << "YES" << endl;
         
         else cout << "NO" << endl;
       
       }
       
     
     }
}