#include <iostream>
using namespace std;

#define ll long long
#define MOD 1000000007

ll power(ll x, ll y)
{
  ll res = 1;
  x = x % MOD; // Update x if it is more than or equal to MOD

  while (y > 0)
  {
    if (y & 1)
      res = (res * x) % MOD;

    y = y >> 1; // y = y/2
    x = (x * x) % MOD;
  }
  return res;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;
  cin >> n;

  for (int i = 0; i < n; ++i)
  {
    ll a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
  }

  return 0;
}
