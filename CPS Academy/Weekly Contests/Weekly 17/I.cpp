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
  ll n, a, b, d;
  cin >> n >> a >> b >> d;

  ll diff = abs(a - b);

  ll ans = INT_MAX;
  if (diff % d == 0)
  {
    ll temp = (diff) / d;
    ans = min(ans, temp);
  }

  diff = n - b;
  if (diff)
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