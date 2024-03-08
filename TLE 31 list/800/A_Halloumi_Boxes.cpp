#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n + 1);
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    bool flag = false;
    if (k == 1)
    {
      for (int i = 0; i < n - 1; i++)
      {
        if (arr[i] > arr[i + 1])
        {
          flag = true;
          break;
        }
      }
    }

    if (flag)
      cout << "NO" << endl;
    else
    {
      cout << "YES" << endl;
    }
  }
}
