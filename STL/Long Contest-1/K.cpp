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
  cin >> n;
  vector<vector<ll>> companies(n);
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;

    companies[i].resize(x);
    for (int j = 0; j < x; j++)
    {
      cin >> companies[i][j];
    }
    sort(companies[i].rbegin(), companies[i].rend());
  }
  sort(companies.rbegin(), companies.rend());
  ll ans = 0;
  for (int i = 0; i < n - 1; i++)
  {
    ll x = companies[0][0] - companies[i + 1][0];
    ans += (x * (companies[i + 1].size()));
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
