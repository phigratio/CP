
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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  ll arr[24];
  for (int i = 0; i < 24; i++)
  {
    arr[i] = i + 1;
  }

  ll fir, sec, thr, four;

  if (a < b)
  {
    fir = a;
    sec = b;
  }
  else
  {
    fir = b;
    sec = a;
  }

  bool flag = false;
  if (c > fir && c < sec)
  {
    flag = true;
  }

  if (d > fir && d < sec)
  {
    if (flag)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }
  else
  {
    if (!flag)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }
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