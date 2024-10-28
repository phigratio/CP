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
  string str1, str2;
  cin >> str1 >> str2;

  for (int i = 0; i < str1.size(); i++)
  {
    if (str1[i] >= 'A' && str1[i] <= 'Z')
    {
      str1[i] = str1[i] - 'A' + 'a';
    }
    if (str2[i] >= 'A' && str2[i] <= 'Z')
    {
      str2[i] = str2[i] - 'A' + 'a';
    }
  }
  if (str1 < str2)
  {
    cout << -1 << endl;
    return;
  }
  else if (str1 > str2)
  {
    cout << 1 << endl;
    return;
  }
  else
  {
    cout << 0 << endl;
  }
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