
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
  vector<ll> arr(n - 1);
  vector<ll> par(n + 1, -1);
  for (int i = 0; i < n - 1; i++)
  {
    cin >> arr[i];
    par[i + 2] = arr[i];
  }
  ll i = n;
  vector<ll> ans;
  ans.pb(n);
  while (par[i] != 1)
  {
    ans.pb(par[i]);
    i = par[i];
  }
  ans.pb(1);

  reverse(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
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