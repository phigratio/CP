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
  ll n, m;
  cin >> n >> m;
  string a, b;
  cin >> a >> b;

  ll ans = 0;
  ll j = -1;
  for (int i = 0; i < n; i++)
  {
    while (j < m)
    {
      j++;
      if (a[i] == b[j])
      {
        ans++;
        break;
      }
    }
  }

  cout << ans << endl;
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