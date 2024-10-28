#include <bits/stdc++.h>
using namespace std;

#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int maxi = 1e6 + 1;
#define pb push_back
#define F first
#define S second

void muqtu()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  string rev = s;
  reverse(rev.begin(), rev.end());

  if (s == rev)
  {
    cout << 0 << endl;
    return;
  }

  int ans = n + 1;
  for (int i = 0; i < 26; i++)
  {
    int curr = 0;
    int st = 0, e = n - 1;

    while (st < e)
    {
      if (s[st] == s[e])
      {
        st++;
        e--;
      }
      else if (s[st] == (char)('a' + i))
      {
        curr++;
        st++;
      }
      else if (s[e] == (char)('a' + i))
      {
        curr++;
        e--;
      }
      else
      {
        curr = n + 1;
        break;
      }
    }

    ans = min(ans, curr);
  }

  if (ans == n + 1)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
  }
}

int main()
{
  faster;
  int t;
  cin >> t; // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
