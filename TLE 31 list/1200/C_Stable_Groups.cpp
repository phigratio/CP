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
  ll n, k, x;
  cin >> n >> k >> x;

  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  vector<ll> gaps;
  for (int i = 0; i < n - 1; i++)
  {
    ll temp = arr[i + 1] - arr[i];
    if (temp > x)
    {
      ll newTemp = (ll)ceil((double)temp / x) - 1;
      gaps.pb(newTemp);
    }
  }

  sort(gaps.begin(), gaps.end());
  ll cnt = gaps.size() + 1;

  for (ll gap : gaps)
  {
    if (k >= gap)
    {
      k -= gap;
      cnt--;
    }
    else
    {
      break;
    }
  }
  cout << cnt << endl;
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
