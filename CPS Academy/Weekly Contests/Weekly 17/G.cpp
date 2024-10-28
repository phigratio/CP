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
  ll n, k;
  cin >> n >> k;
  ll ans = INT_MAX;
  for (ll i = 1; i < k; i++)
  {
    if (n % i == 0)
    {
      ll val = n / i;
      ans = min(ans, (val * k) + i);
    }
  }
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