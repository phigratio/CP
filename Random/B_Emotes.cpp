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
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  ll highest = arr[n - 1];
  ll sec = arr[n - 2];

  ll times = k + 1;
  ll turnsH, turnsS;
  if (m % times == 0)
  {
    turnsH = (m / times) * k;
    turnsS = m / times;
  }
  else
  {
    turnsH = ((m / times) * k) + (m % times);
    turnsS = m / times;
  }
  // cout << turnsH << " " << turnsS << endl;
  ll ans = (turnsH * highest) + (turnsS * sec);
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
