#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void muqtu()
{
  ll n, s;
  cin >> n >> s;
  vector<ll> go(n + 1), back(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cin >> go[i];
  }
  for (int i = 1; i <= n; i++)
  {
    cin >> back[i];
  }

  bool flag = false;
  if (go[1] == 0)
  {
    cout << "NO" << endl;
    return;
  }
  else if (go[s] == 1)
  {
    cout << "YES" << endl;
    return;
  }

  for (int i = s + 1; i <= n; i++)
  {
    if (go[i] == back[i] && go[i] == 1)
    {
      if (back[s] == 1)
      {
        flag = true;
        break;
      }
      else
      {
        break;
      }
    }
  }

  if (flag)
  {
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;
}

int main()
{
  faster;
  ll t = 1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
