#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
void muqtu()
{
  string a, b;
  cin >> a >> b;
  ll s1 = a.size();
  ll s2 = b.size();
  ll n = (s1 * s2) / (__gcd(s1, s2));
  ll c1 = 0;
  ll c2 = 0;

  string ans;
  n /= min(s1, s2);

  for (int i = 0; i < n; i++)
  {
    if (s1 < s2)
    {
      for (int j = 0; j < s1; j++)
      {
        ans.push_back(a[j]);
      }
      c1 = 1;
    }
    else
    {
      for (int j = 0; j < s2; j++)
      {
        ans.push_back(b[j]);
      }
      c2 = 1;
    }
  }

  if (c1 == 1)
  {
    int j = 0;
    for (int i = 0; i < ans.size(); i++)
    {
      if (ans[i] != b[j])
      {
        cout << -1 << endl;
        return;
      }
      if (j == s2 - 1)
      {
        j = 0;
      }
      else
        j++;
    }
    cout << ans << endl;
  }
  else
  {
    int j = 0;
    for (int i = 0; i < ans.size(); i++)
    {
      if (ans[i] != a[j])
      {
        cout << -1 << endl;
        return;
      }
      if (j == s1 - 1)
      {
        j = 0;
      }
      else
        j++;
    }

    cout << ans << endl;
  }

  return;
}
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
}