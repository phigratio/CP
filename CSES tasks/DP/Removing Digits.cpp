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
  vector<ll> dp(maxi, INT_MAX);
  dp[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    string str = to_string(i);
    for (auto c : str)
    {
      ll digit = c - '0';
      if (digit != 0)
        dp[i] = min(dp[i], dp[i - digit] + 1);
    }
  }

  cout << dp[n] << endl;
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