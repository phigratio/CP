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
  ll a, b, c;
  cin >> a >> b >> c;
  ll mini = min(min(a, b), c);

  ll sum = a + b + c;
  if (sum % 2 == 1)
  {
    cout << -1 << endl;
  }
  else
  {
    ll ans = 0;
    ans += a;
    ll diff = c - b;
    if (a >= diff)
    {
      a -= diff;
      c -= diff;
      c -= (a / 2);
      ans += min(b, c);
    }
    else
    {
      diff -= a;
      if (diff >= b)
        ans += b;
      else
      {
        ans += min(b, c);
      }
    }
    cout << ans << endl;
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