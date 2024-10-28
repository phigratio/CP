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
void muqtu()
{
  string str;
  cin >> str;
  ll n = str.size();
  bool ans = false;
  for (ll i = 1; i < n - 1; i++)
  {
    if (str[i] == 'A')
    {
      if (str[i - 1] != '.' && str[i + 1] != '.')
      {
        if (str[i - 1] != str[i + 1] && str[i - 1] != str[i] && str[i + 1] != str[i])
        {
          ans = true;
          break;
        }
      }
    }
    else if (str[i] == 'B')
    {
      if (str[i - 1] != '.' && str[i + 1] != '.')
      {
        if (str[i - 1] != str[i + 1] && str[i - 1] != str[i] && str[i + 1] != str[i])
        {
          ans = true;
          break;
        }
      }
    }
    else if (str[i] == 'C')
    {
      if (str[i - 1] != '.' && str[i + 1] != '.')
      {
        if (str[i - 1] != str[i + 1] && str[i - 1] != str[i] && str[i + 1] != str[i])
        {
          ans = true;
          break;
        }
      }
    }
  }

  if (ans)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
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