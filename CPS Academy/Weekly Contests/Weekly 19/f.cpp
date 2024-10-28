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
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(n);
  ll neg = 0, pos = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] == -1)
    {
      neg++;
    }
    else
    {
      pos++;
    }
  }

  ll ans = 0;
  for (int j = 0; j < k; j++)
  {
    ll minus = 0, plus = 0;
    for (int i = j; i < n; i += k)
    {
      if (arr[i] == -1)
        minus++;
      else
      {
        plus++;
      }
    }
    ll temp1 = neg - minus;
    ll temp2 = pos - plus;
    ans = max(ans, abs(temp1 - temp2));
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