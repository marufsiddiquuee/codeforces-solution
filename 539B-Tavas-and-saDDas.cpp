#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin >> s;

   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='4')
        s[i]='0';

       else s[i]='1';
   }
   int x=stoi(s,nullptr,2)+1;
   x+=(1<<s.size())-2;

   cout <<x;

}