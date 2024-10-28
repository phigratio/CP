#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
  ll n;
  cin >> n;
  char c;
  cin >> c;
  string s;
  cin >> s;
  set<char> st;
  for (int i = 0; i < n; i++)
  {
    st.insert(s[i]);
  }
  if (st.size() == 1)
  {
    if (st.find(c) != st.end())
    {
      cout << 0 << endl;
      return;
    }
  }
  if (n == 2)
  {
    cout << 2 << endl;
    cout << 1 << " " << 2 << endl;
    return;
  }
  int mid = 0;
  if (n % 2)
  {
    mid = n / 2 + 1;
  }
  else
  {
    mid = n / 2;
  }
  for (int i = n / 2; i < n; i++)
  {
    if (s[i] == c)
    {
      cout << 1 << endl;
      cout << i + 1 << endl;
      return;
    }
  }
  cout << 2 << endl;
  cout << mid << " " << mid + 1 << endl;
  return;
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
