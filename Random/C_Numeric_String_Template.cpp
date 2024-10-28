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
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll m;
  cin >> m;
  for (int i = 0; i < m; i++)
  {

    string str;
    cin >> str;
    if (str.length() != n)
    {
      cout << "NO" << endl;
    }
    else
    {
      map<ll, char> mp1;
      map<char,ll> mp2
      bool flag = true;
      for (int i = 0; i < str.length(); i++)
      {
        if (mp.find(str[i]) != mp.end())
        {

          if (mp[str[i]] != arr[i])
          {
            flag = false;
          }
        }
        mp[str[i]] = arr[i];
      }
      if (flag)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
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