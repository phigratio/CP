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
  if (s[0] != '1' or s[1] != '0')
  {
    cout << "NO" << endl;
    return;
  }
  if (s[2] == '0' and s.length() >= 3)
  {
    cout << "NO" << endl;
    return;
  }
  int ans = 0;
  int j = 1;
  for (int i = s.length() - 1; i >= 2; i--)
  {
    ans += (j * (s[i] - '0'));
    j *= 10;
  }
  if (ans >= 2)
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