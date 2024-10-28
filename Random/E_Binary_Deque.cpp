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

void solve()
{
  ll n, s;
  cin >> n >> s;
  vector<ll> arr(n + 1);
  ll sum = 0;
  vector<ll> pref(n + 1, 0);
  ll ans = INT_MAX;

  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
    pref[i] = pref[i - 1] + arr[i];
  }

  if (sum < s)
  {
    cout << -1 << endl;
    return;
  }
  if (sum == s)
  {
    cout << 0 << endl;
    return;
  }

  for (int i = 1; i <= n; i++)
  {
    ll curr = pref[i - 1] + s;
    if (pref[n] < curr)
    {
      continue;
    }
    else
    {
      auto it = upper_bound(pref.begin(), pref.end(), curr);
      it--;
      ll dist = (it - pref.begin());
      ans = min(ans, n - (dist - i + 1));
    }
  }
  cout << ans << endl;
  return;
}

int main()
{
  faster;
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
