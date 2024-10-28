
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
  string str;
  cin >> str;
  string temp = str;
  ll n = str.size();
  bool flag = false;
  for (int i = 0; i < n - 1; i++)
  {
    if (str[i] != str[i + 1])
    {
      flag = true;
      swap(str[i], str[i + 1]);
      break;
    }
  }

  if (!flag)
    cout << "NO" << endl;
  else
  {
    cout << "YES" << endl;
    cout << str << endl;
  }
}
int main()
{
  faster;
  ll t;
  cin >> t; // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}