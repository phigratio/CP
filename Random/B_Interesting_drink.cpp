#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void muqtu()
{
  ll n;
  cin >> n;
  vector<ll> prices(n);
  for (int i = 0; i < n; i++)
  {
    cin >> prices[i];
  }

  sort(prices.begin(), prices.end());

  ll q;
  cin >> q;
  while (q--)
  {
    ll x;
    cin >> x;
    auto it = upper_bound(prices.begin(), prices.end(), x);
    cout << (it - prices.begin()) << '\n';
  }
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
