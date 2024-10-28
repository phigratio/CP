#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
vector<ll> bin;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll maxi = 1e5 + 1;
#define pb push_back
#define f first
#define s second
vector<bool> hesh(maxi, false);
void muqtu()
{
  ll n;
  cin >> n;
  if (hesh[n])
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
  cin >> t; // t=1;
  for (int i = 1; i <= maxi; i++)
  {
    string str = to_string(i);
    bool flag = (*max_element(str.begin(), str.end()) <= '1');
    if (flag)
    {

      hesh[i] = true;
      bin.pb(i);
    }
  }
  for (int i = 2; i <= maxi; i++)
  {
    if (hesh[i])
    {
      for (auto x : bin)
      {

        if (x * i < maxi)
        {
          hesh[x * i] = true;
        }
        else
        {
          break;
        }
      }
    }
  }

  while (t--)
  {
    muqtu();
  }
  return 0;
}