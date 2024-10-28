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
  ll cnt0 = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      cnt0++;
    }
  }

  if (cnt0 == 0)
  {
    cout << "DRAW" << endl;
  }
  else if (cnt0 == 1)
  {
    cout << "BOB" << endl;
  }
  else if (cnt0 % 2)
  {
    cout << "ALICE" << endl;
  }
  else
  {
    cout << "BOB" << endl;
  }
  return;
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
