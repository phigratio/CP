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
  ll n;
  while (cin >> n)
  {
    vector<pair<ll, ll>> pairs;
    ll count = 0;

    for (int i = n + 1; i <= n * 2; i++)
    {
      if ((n * i) % (i - n) == 0)
      {
        ll x = (n * i) / (i - n);
        pairs.push_back({x, i});
      }
    }

    if (pairs.empty())
    {
      cout << "No Solution" << endl;
    }
    else
    {
      cout << pairs.size() << endl;

      for (auto x : pairs)
      {
        cout << "1/" << n << " = "
             << "1/" << x.first << " + "
             << "1/" << x.second << endl;
      }
    }
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
