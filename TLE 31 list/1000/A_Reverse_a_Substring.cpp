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
  string str;
  cin >> str;
  for (int i = 0; i < n - 1; i++)
  {
    if (str[i] > str[i + 1])
    {
      cout << "YES" << endl;
      cout << i + 1 << " " << i + 2 << endl;
      return;
    }
  }
  cout << "NO" << endl;
  return;
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