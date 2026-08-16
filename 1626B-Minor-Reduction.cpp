#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
     while(t--)
     {
       string x;
       cin >> x;
       
       int s=x.size();
       
       
       for(int i=s-1;i>=1;i--)
       {
          int sum = (x[i-1]-'0') + (x[i]-'0');

            if(sum > 9) {
                x.replace(i-1, 2, to_string(sum));
                break;
                }
            
            if(i==1)
            {
              x.replace(i-1, 2, to_string(sum)); 
              break;
            }
                
          }
          
          cout << x << endl;
       
       }
       
       }
       
     
     
     