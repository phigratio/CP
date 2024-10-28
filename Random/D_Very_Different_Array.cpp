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
  ll m;
  ll n;
  cin >> m >> n;
  vector<ll> arr(n);
  vector<ll> arr2(m);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> arr2[i];
  }
  sort(arr.begin(), arr.end());
  sort(arr2.begin(), arr2.end(), greater<ll>());
  ll ans = 0;
  ll j = 0;
  ll k = m - 1;
  for (int i = 0; i < n; i++)
  {
    ll temp = abs(arr[i] - arr2[k]);

    ans += temp;
    k--;
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