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
  cin >> n;
  ll a, b;
  cin >> a >> b;

  if (n == 1 && a == b)
  {
    cout << 1 << endl;
    cout << a << ":" << b << endl;
    return;
  }
  else if (n == 1)
  {
    cout << 0 << endl;
    cout << a << ":" << b << endl;
    return;
  }

  if (a + b < n)
  {
    cout << n - a - b << endl;
    for (int i = 0; i < a; i++)
    {
      cout << "1:0" << endl;
    }

    for (int i = 0; i < b; i++)
    {
      cout << "0:1" << endl;
    }

    for (int i = a + b; i < n; i++)
    {
      cout << "0:0" << endl;
    }
  }
  else if (a + b == n)
  {
    cout << 0 << endl;
    for (int i = 0; i < a; i++)
    {
      cout << "1:0" << endl;
    }

    for (int i = 0; i < b; i++)
    {
      cout << "0:1" << endl;
    }
  }
  else if (a < n && b < n)
  {
    cout << 0 << endl;
    for (int i = 0; i < a; i++)
    {
      cout << "1:0" << endl;
    }
    ll cnt = 0;
    for (int i = a; i < n - 1; i++)
    {
      cout << "0:1" << endl;
      cnt++;
    }
    cout << 0 << ":" << b - cnt << endl;
  }
  else if (a >= n && b >= n)
  {
    cout << 0 << endl;
    cout << a << ":0" << endl;
    ll cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
      cout << "0:1" << endl;
      cnt++;
    }
    cout << "0:" << b - cnt << endl;
  }
  else if (a == 0)
  {
    cout << 0 << endl;
    ll cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
      cout << "0:1" << endl;
      cnt++;
    }
    cout << "0:" << b - cnt << endl;
  }
  else if (b == 0)
  {
    cout << 0 << endl;
    ll cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
      cout << "1:0" << endl;
      cnt++;
    }
    cout << a - cnt << ":0" << endl;
  }
  else if (a < n)
  {
    cout << 0 << endl;
    cout << a << ":0" << endl;
    ll cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
      cout << "0:1" << endl;
      cnt++;
    }
    cout << "0:" << b - cnt << endl;
  }
  else
  {
    cout << 0 << endl;
    cout << "0:" << b << endl;
    ll cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
      cout << "1:0" << endl;
      cnt++;
    }
    cout << a - cnt << ":0" << endl;
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