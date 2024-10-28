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
  ll n, m;
  cin >> n >> m;
  vector<ll> arr(n);
  vector<ll> hesh(m, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    hesh[arr[i] % m]++;
  }

  int ans = 0;
  if (hesh[0] != 0)
  {
    ans++;
  }

  for (int i = 1; i <= m / 2; i++)
  {
    ll j = m - i;
    if (hesh[i] != 0 || hesh[j] != 0)
    {
      if (i == j)
      {
        ans++;
      }
      else
      {
        int x = hesh[i];
        int y = hesh[j];

        ans += 1 + max(0, abs(x - y) - 1);
      }
    }
  }
  cout << ans << endl;
}

int main()
{
  faster;
  ll t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
