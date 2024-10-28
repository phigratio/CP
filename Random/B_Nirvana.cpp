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
  string s;
  cin >> s;
  ll ans = 1;
  reverse(s.begin(), s.end());
  for (int i = 0; i < s.size() - 1; i++)
  {
    if (s[i] == '9' s[i] == '9 ' && i != (s.size() - 2))
    {
      s[i + 1] = '8';
      i++;
    }
    else
    {
      s[i] = '9';
    }
    cout << s << endl;
  }

  for (int i = 0; i < s.size(); i++)
  {
    ans *= (s[i] - '0');
  }
  cout << s << endl;
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