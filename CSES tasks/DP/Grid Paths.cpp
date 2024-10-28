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
  ll dp[n + 1][n + 1];
  char matrix[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> matrix[i][j];
    }
  }

  if (matrix[n - 1][n - 1] == '.')
    dp[n - 1][n - 1] = 1;
  else
    dp[n - 1][n - 1] = 0;

  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = n - 1; j >= 0; j--)
    {
      if (i == n - 1 && j == n - 1)
        continue;
      else if (matrix[i][j] == '*')
      {
        dp[i][j] = 0;
      }
      else
      {
        ll ans1 = i < n - 1 ? dp[i + 1][j] : 0;
        ll ans2 = j < n - 1 ? dp[i][j + 1] : 0;

        dp[i][j] = (ans1 + ans2) % MOD;
      }
    }
  }
  cout << dp[0][0] << endl;
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