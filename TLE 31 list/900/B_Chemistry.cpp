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

void muqtu()
{
  ll n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<ll> hesh(26, 0);
  for (int i = 0; i < n; i++)
  {
    hesh[s[i] - 'a']++;
  }
  hesh.erase(remove(hesh.begin(), hesh.end(), 0), hesh.end());
  sort(hesh.begin(), hesh.end());
  ll total = 0;
  for (int i = 0; i < hesh.size(); i++)
  {
    if (hesh[i] % 2)
    {
      total++;
    }
  }

  if (total >= k)
  {
    total -= k;
    if (total <= 1)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  else
  {
    cout << "YES" << endl;
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
