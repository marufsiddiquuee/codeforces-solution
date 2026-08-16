#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main()
{
   string s;
   cin >> s;
   
   for(int i=0;i<s.size();i++)
   {
     
     if((i==0 && s[i]=='9') || s[i]<='4')
     cout << s[i];
     
     else cout << 9-(s[i]-'0'); 
   
   }
}