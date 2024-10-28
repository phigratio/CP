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
  string s;
  cin >> s;
  if (n == 1)
  {
    cout << "Yes" << endl;
    return;
  }
  vector<ll> cnt(26);
  for (int i = 0; i < n; i++)
  {
    cnt[s[i] - 'a']++;
  }
  bool flag = false;
  bool one = false;
  for (int i = 0; i < 26; i++)
  {
    if (cnt[i] > 1)
    {
      flag = true;
      break;
    }
  }
  if (flag)
    cout << "Yes" << endl;
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