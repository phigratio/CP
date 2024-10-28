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
#define f first
#define s second
void muqtu()
{
  ll n;
  cin >> n;

  string str = to_string(n);

  ll nine = str.size() - 1;

  ll ans = nine * 9;

  ll newNum = 0;
  for (int i = 0; i < nine; i++)
  {
    newNum = newNum * 10 + 9;
  }

  ll rem = n - newNum;

  while (rem != 0)
  {
    ans += (rem % 10);
    rem /= 10;
  }

  cout << ans << endl;
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
