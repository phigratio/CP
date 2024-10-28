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
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<ll> suf(n), pref(n);
  pref[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    pref[i] = pref[i - 1] + arr[i];
  }
  suf[n - 1] = arr[n - 1];

  for (int i = n - 2; i >= 0; i--)
  {
    suf[i] = suf[i + 1] + arr[i];
  }

  ll ans = abs(pref[n - 1]);

  for (int i = 0; i < n - 1; i++)
  {
    ll sum = abs(pref[i]) + suf[i + 1];
    ans = max(ans, sum);
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
}