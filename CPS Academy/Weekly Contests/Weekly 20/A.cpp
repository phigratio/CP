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
  for (int i = 0; i < m; i++)
  {
    ll a, b;
    cin >> a >> b;
  }
  if (n > m)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}

int main()
{
  faster;
  ll t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
