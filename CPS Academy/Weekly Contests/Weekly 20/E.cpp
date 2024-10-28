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
  bool flag = true;
  if (a != d)
  {
    flag = false;
  }
  else if (a == 0 && (c))
  {
    flag = false;
  }
  else if (d == 0 && (c))
  {
    flag = false;
  }

  if (flag == false)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << 1 << endl;
  }
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
