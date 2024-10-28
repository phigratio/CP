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
  ll l, v, s, e;
  cin >> l >> v >> s >> e;

  ll x = (s - 1);
  ll ans = (x) / v;

  ll rem = (e % v);
  e = e - rem;

  x = (l - e) / v;
  ans += x;
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