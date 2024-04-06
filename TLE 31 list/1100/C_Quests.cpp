#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define pb push_back
#define f first
#define s second

void muqtu()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n + 1, 0), b(n + 1, 0), suma(n + 1), maxb(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    suma[i] = a[i] + suma[i - 1];
  }
  for (int i = 1; i <= n; i++)
  {
    cin >> b[i];
    maxb[i] = max(maxb[i - 1], b[i]);
  }

  ll ans = INT_MIN;
  for (int i = 1; i <= n; i++)
  {

    ans = max(ans, suma[i] + (k - i) * maxb[i]);
    if (k == i)
    {
      break;
    }
  }
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