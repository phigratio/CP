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
ll findMSB(ll n)
{
  ll pos = 0;
  while (n != 0)
  {
    n = n >> 1;
    pos++;
  }
  return pos;
}
void muqtu()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  unordered_map<ll, vector<ll>> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    ll pos = findMSB(arr[i]);
    mp[pos].pb(i);
  }
  ll ans = 0;
  for (int j = 0; j < mp.size(); j++)
  {
    for (int i = mp[j].size() - 1; i > 0; i--)
    {
      ans += i;
    }
  }
  cout << ans << endl;
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
