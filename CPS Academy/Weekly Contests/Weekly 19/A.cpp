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
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll ans = 0;
  ll s = 0, e = n - 1;
  while (s < e)
  {
    if (arr[s] == 0)
    {
      s++;
      if (arr[e] == 1)
      {
        e--;
      }
      else
      {
        continue;
      }
    }
    else
    {
      if (arr[e] == 0)
      {
        ans++;
        s++;
        e--;
      }
      else
      {
        e--;
      }
    }
  }
  cout << ans << endl;
}
int main()
{
  faster;
  ll t;
  cin >> t; // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}