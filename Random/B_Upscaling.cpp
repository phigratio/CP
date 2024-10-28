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
  string hesh = "";
  string dot = "";
  string ans = "";
  for (int i = 1; i <= n; i++)
  {
    if (i % 2)
    {
      hesh += "##";
      dot += "..";
    }
    else
    {
      dot += "##";
      hesh += "..";
    }
  }

  for (int i = 1; i <= n; i++)
  {
    if (i % 2)
    {
      cout << hesh << endl;
      cout << hesh << endl;
    }
    else
    {
      cout << dot << endl;
      cout << dot << endl;
    }
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