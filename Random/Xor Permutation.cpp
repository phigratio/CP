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
#define f first
#define s second
void muqtu()
{
  ll n;
  cin >> n;
  vector<ll> ans;
  vector<ll> hesh(n + 1);
  if (n == 3)
  {
    cout << -1 << endl;
    return;
  }
  else
  {
    ans.pb(1);
    ans.pb(4);
    ans.pb(3);
    ans.pb(2);
    for (int i = 5; i <= n; i++)
    {
      ans.pb(i);
    }
    for (auto x : ans)
    {
      cout << x << " ";
    }
    cout << endl;
  }
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