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
  ll k;
  cin >> k;
  map<ll, ll> arr;
  ll mexi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    arr[x]++;
  }
  for (const auto &pair : arr)
  {
    mexi = max(mexi, pair.second);
  }
  ll dishes = ceil((mexi * 1.0) / k);

  ll ans = (dishes * k * arr.size()) - n;
  cout << ans << endl;
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
