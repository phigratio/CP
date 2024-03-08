#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll sz = 1e6;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define pb push_back
#define f first
#define s second
ll cas = 0;
vector<ll> arr;
vector<bool> vis(sz, false);
void sieve()
{
  for (int i = 2; i <= sz; i++)
  {
    vis[i] = true;
  }
  for (int i = 2; i * i <= sz; i++)
  {
    if (vis[i] == true)
    {
      for (int j = i * i; j <= sz; j += i)
      {
        vis[j] = false;
      }
    }
  }
  for (int i = 2; i <= sz; i++)
  {
    if (vis[i] == true)
    {
      arr.pb(i);
    }
  }
}
void muqtu()
{

  ll n;
  cin >> n;
  ll ans = 1;
  cas++;
  for (int i = 0; i < arr.size() and arr[i] * arr[i] <= n; i++)
  {
    if (n % arr[i] == 0)
    {
      ll cnt = 0;
      while (n % arr[i] == 0)
      {
        cnt++;
        n /= arr[i];
      }

      ans *= (cnt + 1);
    }
  }
  if (n > 1)
    ans *= 2;
  cout << "Case " << cas << ":"
       << " " << ans - 1 << endl;
}
int main()
{
  sieve();
  ll t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
  return 0;
}