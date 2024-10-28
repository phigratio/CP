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
  ll n, x;
  cin >> n >> x;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  ll ans = arr[0];
  ll sm = arr[0];
  for (int i = 1; i < n; i++)
  {
    sm = (arr[i] - arr[i - 1]) * i;
    if (x - sm >= 0)
    {
      ans += sm;
    }
    else
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
  cin >> t; // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}