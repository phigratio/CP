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
  ll n, g, b;
  cin >> n >> g >> b;
  ll minGood = ceil((n * 1.0) / 2);
  // cout << "minGood: " << minGood << endl;
  ll remDay = minGood - g;
  // cout << "remDay:" << remDay << endl;
  if (remDay <= 0)
  {
    cout << n << endl;
  }
  else
  {
    ll cycle = (minGood + g - 1) / g;
    ll ans = (cycle - 1) * b;
    ans = max((ans + minGood), n);
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