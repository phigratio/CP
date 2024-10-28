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
  ll sum = 0;
  if (n % 2)
  {
    ll up = ceil((n * 1.0) / 2);
    sum = (up * (up + 1));
  }
  else
  {
    ll up = n / 2;
    sum = (up * (up + 1));
  }

  ll ans = sqrt(sum);
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
