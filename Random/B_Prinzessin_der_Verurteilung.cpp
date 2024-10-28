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
#define F first
#define S second

void muqtu()
{
  ll n;
  cin >> n;

  string s;
  cin >> s;
  vector<ll> cnt(26, 0);
  for (int i = 0; i < n; i++)
  {
    cnt[s[i] - 'a'] = 1;
  }
  for (int i = 0; i < 26; i++)
  {
    if (cnt[i] == 0)
    {
      cout << (char)('a' + i) << endl;
      return;
    }
  }

  set<string> st;
  for (int i = 0; i < n - 1; i++)
  {
    string temp = "";
    temp += s[i];
    temp += s[i + 1];
    st.insert(temp);
  }

  for (int i = 0; i < 26; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      string temp = "";
      temp += (char)('a' + i);
      temp += (char)('a' + j);

      if (st.find(temp) == st.end())
      {
        cout << temp << endl;
        return;
      }
    }
  }

  set<string> stt;
  for (int i = 0; i < n - 2; i++)
  {
    string temp = "";
    temp += s[i];
    temp += s[i + 1];
    temp += s[i + 2];
    stt.insert(temp);
  }

  for (int i = 0; i < 26; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      for (int k = 0; k < 26; k++)
      {

        string temp = "";
        temp += (char)('a' + i);
        temp += (char)('a' + j);
        temp += (char)('a' + k);

        if (stt.find(temp) == stt.end())
        {
          cout << temp << endl;
          return;
        }
      }
    }
  }

  return;
}

int main()
{
  faster;
  ll t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
