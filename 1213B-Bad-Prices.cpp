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
       int n;
       cin >> n;
       
       vector<int> a(n);
       
       for(auto &x:a)
       cin >> x;
int mn = a[n - 1];
int cnt = 0;

for (int i = n - 2; i >= 0; i--) {
    if (a[i] > mn)
        cnt++;
    else
        mn = a[i];
}


       
       cout << cnt << endl;
       }
       
     
     }