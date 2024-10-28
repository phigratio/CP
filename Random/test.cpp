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
  vector<bool> vis(n + 1, false);
  bool flag = false;
  vector<ll> ans(n + 1, -1);

  for (int i = 0; i < m; i++)
  {
    ll x;
    cin >> x;
    if (x == 1 || x == n)
    {
      flag = true;
      break;
    }
    else
    {
      ans[x] = x + 1;
      vis[x + 1] = true;
    }
  }

  if (flag)
  {
    cout << -1 << endl;
    return;
  }
  else
  {
    ll j = 1;
    ll i = 1;
    while (true)
    {
      if (vis[j])
      {
        j++;
      }
      else if (ans[i] != -1)
      {
        i++;
      }
      else if (i > n || j > n)
      {
        break;
      }
      else
      {
        ans[i] = j;
        vis[j] = true;
        i++;
        j++;
      }
    }

    for (int i = 1; i <= n; i++)
    {
      cout << ans[i] << " ";
    }
  }
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
