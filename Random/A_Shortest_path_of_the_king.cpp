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
  string s1;
  string s2;
  cin >> s1 >> s2;

  char x1 = s1[0], x2 = s2[0];
  ll y1 = s1[1] - '0';
  ll y2 = s2[1] - '0';

  ll diffX = x2 - x1;
  ll diffY = y2 - y1;

  vector<string> ans;

  while (diffX && diffY)
  {
    string s = "";
    if (diffX > 0)
    {
      s += 'R';
      diffX--;
      if (diffY > 0)
      {
        s += 'U';
        diffY--;
      }
      else
      {
        s += 'D';
        diffY++;
      }
      ans.pb(s);
    }
    else
    {
      s += 'L';
      diffX++;
      if (diffY > 0)
      {
        s += 'U';
        diffY--;
      }
      else
      {
        s += 'D';
        diffY++;
      }
      ans.pb(s);
    }
  }
  while (diffX)
  {
    string s = "";
    if (diffX > 0)
    {
      s += 'R';
      diffY--;
    }
    else
    {
      s += 'L';
      diffY++;
    }
    ans.pb(s);
  }
  while (diffY)
  {
    string s = "";
    if (diffY > 0)
    {
      s += 'U';
      diffY--;
    }
    else
    {
      s += 'D';
      diffY++;
    }
    ans.pb(s);
  }

  cout << ans.size() << endl;
  for (auto it : ans)
  {
    cout << it << endl;
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