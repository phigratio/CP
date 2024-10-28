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
  ll m;
  cin >> n >> m;
  string str;
  cin >> str;
  vector<ll> arr(8, 0);
  for (int i = 0; i < str.size(); i++)
  {
    arr[str[i] - 'A']++;
  }
  ll ans = 0;
  for (int i = 0; i < m; i++)
  {
    for (int i = 0; i < 7; i++)
    {
      if (arr[i] == 0)
      {
        ans++;
      }
      else
      {
        arr[i]--;
      }
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