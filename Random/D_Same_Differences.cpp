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
  unordered_map<ll, ll> hesh;
  for (int i = 0; i < n; i++)
  {
    hesh[arr[i] - i]++;
  }

  ll ans = 0;
  for (auto cnt : hesh)
  {
    ll x = cnt.second;
    ans += ((x * (x - 1)) / 2);
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
