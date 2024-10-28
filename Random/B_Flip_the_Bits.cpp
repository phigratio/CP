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
  string s, t;
  cin >> s;
  cin >> t;
  bool flag = true;
  ll sum = 0;
  vector<ll> pref(n, 0);
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '1')
    {
      sum++;
    }
    else
    {
      sum--;
    }
    pref[i] = sum;
  }

  ll posi = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] != t[i])
    {
      posi = i;
    }
  }

  ll cnt = 0;

  for (int i = posi; i >= 0; i--)
  {
    if (s[i] != t[i] && cnt % 2 == 0)
    {
      if (pref[i] == 0)
      {
        cnt++;
        while (i >= 0 && s[i] != t[i])
        {
          i--;
        }
        i++;
      }
      else
      {
        cout << "NO" << endl;
        return;
      }
    }
    else if (s[i] != t[i] && cnt % 2 == 1)
      continue;
    else if (s[i] == t[i] && cnt % 2 == 0)
      continue;
    else if (s[i] == t[i] && cnt % 2 == 1)
    {
      if (pref[i] == 0)
      {
        cnt++;
        while (i >= 0 && s[i] == t[i])
        {
          i--;
        }
        i++;
      }
      else
      {
        cout << "NO" << endl;
        return;
      }
    }
  }
  cout << "YES" << endl;
  return;
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
