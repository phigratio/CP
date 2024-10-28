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
#define F first
#define S second
void muqtu()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  ll l = 0, r = 1, maxi = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    maxi = max(maxi, arr[i]);
  }

  ll res = 0;
  for (int i = 0; i < n; i++)
  {
    ll ans = 0;
    if (arr[i] == maxi)
    {
      ans++;
      while (arr[i] == arr[i + 1] and i != n - 1)
      {
        ans++;
        i++;
      }
    }
    res = max(ans, res);
  }
  cout << res << endl;
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