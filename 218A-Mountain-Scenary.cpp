#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <utility>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <climits>
#include <limits>
#include <fstream>
#include <sstream>
#include <iterator>
#include <chrono>
#include <random>
#include <exception>
#include <stdexcept>
#include <cassert>
#include <typeinfo>
#include <type_traits>
#include <memory>
#include <new>
#include <locale>
#include <regex>
#include <complex>
#include <valarray>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    
    vector<int> a(2*n+1);
    
    for(int i=0;i<2*n+1;i++)
    cin >> a[i];
    
    for(int i=1;i<2*n+1 && k ;i+=2)
    {
       if(a[i]-1 >a[i-1] && a[i]-1>a[i+1])
       {
          a[i]--;
          k--;
       }
    
    }
    
    for(int i=0;i<2*n+1;i++)
    {
    cout << a[i] <<" ";
    
    }
    



}