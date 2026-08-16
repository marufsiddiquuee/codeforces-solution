#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   int a, b, c;
   cin >> a >> b >> c;
   
   if(a==1 && c==1)
   cout << a+b+c << endl;
   else  if(b==1)
   {
      if(a > c)
         swap(a, c);
      cout << (a+b)*c  << endl;
   
   }
   else if(a==1)
     cout << (a+b)*c << endl;
     
     else if(c==1)
   cout << a*(b+c) << endl;
   
   
   else cout << a*b*c << endl;
}