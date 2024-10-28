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
  vector<ll> arr(n + 1, 0), prefXor(n + 1, 0);
  map<ll, vector<ll>> mp;
  mp[0].push_back(0);
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    prefXor[i] = prefXor[i - 1] ^ arr[i];
    mp[prefXor[i]].pb(i);
  }

  for (int i = 0; i < q; i++)
  {
    ll l, r;
    cin >> l >> r;

    ll x = prefXor[l - 1] ^ prefXor[r];
    if (x == 0)
    {
      cout << "YES" << endl;
      continue;
    }
    auto &v1 = mp[prefXor[r]], &v2 = mp[prefXor[l - 1]];

    auto it1 = lower_bound(v1.begin(), v1.end(), l);
    auto it2 = --lower_bound(v2.begin(), v2.end(), r);

    if (*it1 < *it2)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
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