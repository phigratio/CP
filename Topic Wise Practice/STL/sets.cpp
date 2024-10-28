#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define pb push_back
#define f first
#define s second
set<ll> s;
void muqtu()
{
  ll x, y;
  cin >> x >> y;
  if (x == 1)
  {
    s.insert(y);
  }
  else if (x == 2)
  {
    s.erase(y);
  }
  else
  {
    set<ll>::iterator itr = s.find(y);
    if (itr != s.end())
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
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