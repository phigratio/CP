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
  ll n, q;
  cin >> n >> q;
  vector<ll> color(n);
  map<ll, ll> mp;
  for (int i = 0; i < 51; i++)
  {
    mp[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    cin >> color[i];
    if (mp[color[i]] == 0)
    {
      mp[color[i]] = i + 1;
    }
  }
  vector<ll> qr(q);
  vector<ll> ans;
  for (int i = 0; i < q; i++)
  {
    cin >> qr[i];
  }

  for (int i = 0; i < q; i++)
  {
    ll temp = qr[i];
    ll traverse = mp[temp];
    ans.pb(mp[temp]);
    mp.erase(temp);

    for (auto &i : mp)
    {
      if (i.s < traverse)
      {
        i.s++;
      }
    }
    mp[temp] = 1;
  }
  for (auto x : ans)
    cout << x << " ";
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