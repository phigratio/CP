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
  ll a, b, c;
  cin >> a >> b >> c;
  ll ans = 0;

  ll start = 0;
  ll end = 0;
  for (int i = 0; i < a; i++)
  {
    ll x, y;
    cin >> x >> y;
    ans += ((x - start) / c);
    start = x + y;
  }

  ans += ((b-start) / c);

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