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
ll n, x;
vector<ll> coins(101, -1);
vector<ll> dp(maxi, -1);
ll dyni(ll c)
{
  if (dp[c] != -1)
    return dp[c];
  dp[0] = 1;
  dp[c] = 0;
  for (int i = 0; i < n; i++)
  {
    if (c - coins[i] >= 0)
      dp[c] = (dp[c] + dyni(c - coins[i])) % MOD;
  }
  return dp[c] % MOD;
}

void muqtu()
{

  cin >> n >> x;

  for (int i = 0; i < n; i++)
  {
    cin >> coins[i];
  }
  ll ans = 0;

  ans += dyni(x);

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