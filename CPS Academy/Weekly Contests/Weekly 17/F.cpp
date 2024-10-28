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
  string str;
  cin >> str;
  bool flag = false;
  string ans;
  for (int i = 1; i < n; i++)
  {
    if (str[i - 1] != str[i])
    {
      flag = true;
      ans += str[i - 1];
      ans += str[i];
      break;
    }
  }
  if (flag)
  {
    cout << "YES" << endl;
    cout << ans << endl;
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
  t = 1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}