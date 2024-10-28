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

void dfs()
{
}
void muqtu()
{
  ll n;
  cin >> n;
  set<ll> s;
  map<ll, vector<ll>> mp;
  for (int i = 1; i <= n; i++)
  {
    ll x;
    cin >> x;
    s.insert(x);
    mp[x].pb(i);
  }
  ll ans = 0;
  if (s.size() == 1)
  {
    cout << "NO" << endl;
    return;
  }
  else
  {
    cout << "YES" << endl;
    vector<vector<ll>> roads;
    for (auto &i : mp)
    {
      roads.pb(i.second);
    }
    for (int i = 1; i < (int)roads.size(); i++)
    {
      for (auto j : roads[i])
      {
        cout << roads[0][0] << " " << j << endl;
      }
    }
    for (int i = 1; i < (int)roads[0].size(); i++)
    {
      cout << roads[0][i] << " " << roads[1][0] << endl;
    }
  }
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