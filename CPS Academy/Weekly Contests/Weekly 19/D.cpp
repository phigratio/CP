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
  ll n, m;
  cin >> n >> m;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  ll prev = 0;
  vector<ll> ans;
  for (int i = 0; i < n; i++)
  {
    ll temp = 0;
    if (prev > arr[i])
    {
      ans.pb(0);
      prev -= arr[i];
      continue;
    }
    else if (prev != 0)
    {
      arr[i] -= prev;
      temp += 1;
    }

    ll curr = arr[i] / m;
    temp += curr;
    ans.pb(temp);
    prev = m - ((arr[i]) % m);
  }

  for (auto it : ans)
  {
    cout << it << " ";
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