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
  ll n;
  cin >> n;
  vector<ll> arr(n);
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }
  double need = n * 4.5;

  double remi = need - (sum * 1.0);
  ll rem = ceil(remi);

  sort(arr.begin(), arr.end());
  if (rem <= 0)
    cout << 0 << endl;
  else
  {
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
      if (rem <= 0)
      {
        break;
      }
      else
      {
        cnt++;
        rem -= (5 - arr[i]);
      }
    }
    cout << cnt << endl;
  }
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