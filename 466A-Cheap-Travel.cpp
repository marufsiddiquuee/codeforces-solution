#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cmath>
#include<set>
using namespace std;

////https://codeforces.com/problemset/problem/466/A
int main()
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;

    int outcome;

    outcome=n*a;

    outcome=min(outcome,(n/m)*b+(n%m)*a);

    outcome=min(outcome,((n + m - 1)/m)*b);

    cout << outcome;

    return 0;
}