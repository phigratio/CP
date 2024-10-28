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
  string str1, str2, str3;
  getline(cin, str1);
  getline(cin, str2);
  getline(cin, str3);
  ll vow1 = 0, vow2 = 0, vow3 = 0;
  for (auto i : str1)
  {
    if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
    {
      vow1++;
    }
  }
  for (int i = 0; i < str2.size(); i++)
  {
    if (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')
    {
      vow2++;
    }
  }
  for (int i = 0; i < str3.size(); i++)
  {
    if (str3[i] == 'a' || str3[i] == 'e' || str3[i] == 'i' || str3[i] == 'o' || str3[i] == 'u')
    {
      vow3++;
    }
  }

  if (vow1 == 5 && vow2 == 7 && vow3 == 5)
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
  t = 1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}