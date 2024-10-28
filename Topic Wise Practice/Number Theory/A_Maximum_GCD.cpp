#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    if (n % 2)
    {
      cout << (n - 1) / 2 << endl;
    }
    else
    {
      cout << n / 2 << endl;
    }
  }
  return 0;
}