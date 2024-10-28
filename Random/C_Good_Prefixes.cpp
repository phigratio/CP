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
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  ll ans = 0;
  if (arr[0] == 0)
  {
    ans++;
  }
  vector<ll> pref(n + 1);
  pref[0] = arr[0];

  for (int i = 1; i < n; i++)
  {
    pref[i] = pref[i - 1] + arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (pref[i] == arr[i] && pref[i] != 0)
    {
      ans++;
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