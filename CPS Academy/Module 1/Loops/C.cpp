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

vector<ll> hesh(1001);

void muqtu()
{
  ll n;
  cin >> n;
  cout << hesh[n - 1] << endl;
}
int main()
{
  faster;
  ll t;
  cin >> t;
  ll i = 0;
  ll j = 1;
  while (i < 1001)
  {
    if ((j % 3) and ((j % 10) != 3))
    {
      hesh[i] = j;
      i++;
    }
    j++;
  }
  while (t--)
  {
    muqtu();
  }
  return 0;
}