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
  ll n, k, q;
  cin >> n >> k >> q;
  vector<ll> dis(k), mins(k);

  for (int i = 0; i < k; i++)
  {
    cin >> dis[i];
  }
  for (int i = 0; i < k; i++)
  {
    cin >> mins[i];
  }

  while (q--)
  {
    ll x;
    cin >> x;
    auto it = lower_bound(dis.begin(), dis.end(), x);

    if (it == dis.begin())
    {
      ll dist = dis[0];
      ll time = mins[0];
      ll ans = (x * time) / dist;
      cout << ans << " ";
    }
    else
    {
      if (it == dis.end())
        it--;

      ll idx = it - dis.begin();
      if (dis[idx] > x)
        idx--;

      if (idx == -1)
        idx = 0;

      ll dist = dis[idx + 1] - dis[idx];
      ll time = mins[idx + 1] - mins[idx];
      ll ans = ((x - dis[idx]) * time) / dist + mins[idx];
      cout << ans << " ";
    }
  }
  cout << endl;
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
