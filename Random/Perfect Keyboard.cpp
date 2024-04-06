#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void muqtu()
{
  string s;
  cin >> s;
  int n = s.size();

  map<char, set<char>> adj;
  for (int i = 0; i < n - 1; ++i)
  {
    adj[s[i]].insert(s[i + 1]);
    adj[s[i + 1]].insert(s[i]);
  }

  vector<bool> visited(26, false);
  string keyboard;

  char prev = s[0];
  keyboard += prev;
  visited[prev - 'a'] = true;

  for (int i = 1; i < n; ++i)
  {
    char curr = s[i];
    if (curr != prev)
    {
      char next = 0;
      for (char c : adj[curr])
      {
        if (!visited[c - 'a'])
        {
          next = c;
          break;
        }
      }

      if (next == 0)
      {
        cout << "NO" << endl;
        return;
      }

      keyboard += next;
      visited[next - 'a'] = true;
      prev = next;
    }
  }

  for (char c = 'a'; c <= 'z'; ++c)
  {
    if (!visited[c - 'a'])
    {
      keyboard += c;
    }
  }

  cout << "YES" << endl;
  cout << keyboard << endl;
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
