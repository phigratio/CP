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
  vector<pair<ll, ll>> p(n + 1);
  vector<ll> pref(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    ll x;
    cin >> x;
    p[i].F = x;
    p[i].S = i;
    pref[i] = x + pref[i - 1];
  }
  sort(p.begin(), p.end());
  vector<ll> ans;
  for (int i = 1; i <= n; i++)
  {
    ll chek1 = pref[n] - p[i].F;
    if (chek1 % 2 == 0)
    {
      ll target = chek1 / 2;
      int idx = lower_bound(p.begin(), p.end(), make_pair(target, 0LL)) - p.begin();
      if (idx != i && p[idx].F == target)
        ans.push_back(p[i].S);
    }
  }

  cout << ans.size() << endl;
  for (auto x : ans)
  {
    cout << x << " ";
  }
  cout << endl;
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