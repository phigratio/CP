#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int maxi = 1e6 + 1;
#define pb push_back
#define F first
#define S second

void muqtu()
{
  ll n;
  cin >> n;
  ll x;
  cin >> x;
  vector<ll> arr(n);
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }
  ll day = 0;
  sort(arr.begin(), arr.end());
  vector<ll> pref(n + 1);
  pref[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    pref[i] = pref[i - 1] + arr[i];
  }
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (pref[i] > x)
    {
      break;
    }

    ll diff = x - pref[i];
    ll y = diff / (i + 1);

    y++;

    ans += (y * (i + 1));

    ans -= (i * y);
  }

  cout << ans << endl;
}

int main()
{
  faster;
  int t;
  cin >> t; // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
