#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  string s;
  cin >> s;
  bool flag = true;
  int num = stoi(s.substr(0, 1));

  if (num != 1)
  {
    flag = false;
  }
  else
  {
    for (int i = 0; i < s.size() - 1; i++)
    {
      if (s[i] == '0')
      {
        flag = false;
        break;
      }
    }
  }

  if (s.back() > '8')
  {
    flag = false;
  }

  if (flag)
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
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
