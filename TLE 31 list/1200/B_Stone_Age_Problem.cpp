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
  ll n, q;
  cin >> n >> q;
  vector<ll> arr(n);
  map<ll, ll> mp1, mp2;
  ll currentSum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    currentSum += arr[i];
    mp1[i] = arr[i];
  }
  ll up = 0;
  while (q--)
  {
    ll t;
    cin >> t;
    if (t == 2)
    {
      ll x;
      cin >> x;
      currentSum = x * n;
      mp1.clear();
      up = x;
    }
    else
    {
      ll i, x;

      cin >> i >> x;
      i--;
      if (!mp1[i])
      {
        mp1[i] = up;
      }

      currentSum -= mp1[i];
      currentSum += x;
      mp1[i] = x;
    }

    cout << currentSum << endl;
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