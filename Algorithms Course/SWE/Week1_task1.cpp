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
  string s;
  cin >> s;
  ll len = s.length();
  bool flag = false;
  if (len < 3)
  {
    flag = false;
  }
  else if (s[0] == '1' and s[1] == '0')
  {
    if (s[2] >= '2')
    {

      flag = true;
    }
    ll count = 0;
    for (int i = 2; i < s.length(); i++)
    {
      if (s[i] == '1' or s[i] == '2')
      {
        count++;
      }
      else if (s[i] == '0')
      {
        if (count)
        {
          flag = true;
          break;
        }
        continue;
      }
      else
      {
        flag = true;
        break;
      }
    }
  }

  if (flag)
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