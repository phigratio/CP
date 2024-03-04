#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n, k;
  ll t;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;

    cout << ceil((double)(n - 1) / k) + 1 << endl;
  }

  return 0;
}