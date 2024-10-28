#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll maxi = 1e6 + 1;
#define pb push_back
#define f first
#define s second
void muqtu()
{
  ll n;
  cin >> n;
  vector<ll> arr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  bool flag = false;
  for (int i = 0; i <= ((1 << n) - 1); i++)
  {
    ll sum = 0;
    for (int j = 0; j < n; j++)
    {
      if (i & (1 << j))
      {
        sum += arr[j];
        sum %= 360;
      }
      else
      {
        sum -= arr[j];
        sum %= 360;
      }
    }
    if (sum % 360 == 0)
    {
      flag = true;
    }
  }
  if (flag)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}
int main()
{
  faster;
  ll t;
  t = 1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}