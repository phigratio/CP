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
  vector<ll> arr(n + 1, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll ans = INT_MAX;

  for (int i = 0; i < ((1 << n)); i++)
  {
    ll sum1 = 0, sum2 = 0;
    for (int j = 0; j < n; j++)
    {
      if (i & (1 << j))
      {
        sum1 += arr[j];
      }
      else
      {
        sum2 += arr[j];
      }
    }
    ans = min(ans, abs(sum1 - sum2));
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