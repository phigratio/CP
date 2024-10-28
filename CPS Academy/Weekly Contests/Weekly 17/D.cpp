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
  vector<int> divisors;
  for (int i = 2; i <= (n / 2); i++)
  {
    if (n % i == 0)
    {
      divisors.pb(i);
    }
  }

  for (int i = 0; i < divisors.size(); i++)
  {
    reverse(str.begin(), str.begin() + divisors[i]);
    }

  reverse(str.begin(), str.end());

  cout << str << endl;
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