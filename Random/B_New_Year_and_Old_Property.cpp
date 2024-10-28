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
  ll a, b;
  cin >> a >> b;
  bool foundOne = false;
  ll cntA = -1, cntB = -1;
  for (int i = 31; i >= 0; i--)
  {
    if ((a >> i) & 1)
    {
      foundOne = true;
    }
    else if (foundOne)
    {
      cntA = 32 - i;
      break;
    }
  }
  foundOne = false;
  for (int i = 31; i >= 0; i--)
  {
    if ((b >> i) & 1)
    {
      foundOne = true;
    }
    else if (foundOne)
    {
      cntB = 32 - i;
      break;
    }
  }

  ll bitsA = 0, bitsB = 0;
  while (a > 0)
  {
    a >>= 1;
    bitsA++;
  }
  while (b > 0)
  {
    b >>= 1;
    bitsB++;
  }
  ll ans = 0;
  ans += cntA;
  ans += (bitsB - cntB - 1);
  for (int i = bitsA; i < bitsB - 1; i++)
  {
    ans += i;
  }
  cout << bitsA << " " << bitsB << " " << cntA << " " << cntB << endl;
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
