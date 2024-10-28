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
  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  ll biga = 0, bigb = 0;

  if (a[0] != b[0])
  {
    if (a[0] == 'S')
    {
      bigb = 1;
    }
    else if (a[0] == 'L')
    {
      biga = 1;
    }
    else
    {
      if (b[0] == 'S')
      {
        biga = 1;
      }
      else
      {
        bigb = 1;
      }
    }
  }
  if (biga)
  {
    cout << ">" << endl;
  }
  else if (bigb)
  {
    cout << "<" << endl;
  }
  else
  {
    if (a.size() > b.size() && a[0] == 'S')
    {
      cout << "<" << endl;
    }
    else if (a.size() < b.size() && a[0] == 'S')
    {
      cout << ">" << endl;
    }
    else if (a.size() > b.size() && a[0] == 'L')
    {
      cout << ">" << endl;
    }
    else if (a.size() < b.size() && a[0] == 'L')
    {
      cout << "<" << endl;
    }
    else
    {
      cout << "=" << endl;
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