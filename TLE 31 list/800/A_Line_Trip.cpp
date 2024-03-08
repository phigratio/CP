#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n + 4);
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
      cin >> arr[i];
    }

    ll maxi = abs(2 * (x - arr[n]));

    for (int i = 0; i < n; i++)
    {
      ll val = abs(arr[i] - arr[i + 1]);
      if (val > maxi)
      {
        maxi = val;
      }
    }

    cout << maxi << endl;
  }
}