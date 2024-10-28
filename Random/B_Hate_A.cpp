#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void muqtu()
{
  string t;
  cin >> t;

  int countA = count(t.begin(), t.end(), 'a');
  int n = t.size();
  int m = n - countA;

  if (m % 2 != 0)
  {
    cout << ":(" << endl;
    return;
  }

  int halfM = m / 2;
  string s = t.substr(0, n - halfM);
  string temp = t.substr(n - halfM);

  string check = "";
  for (char c : s)
  {
    if (c != 'a')
    {
      check += c;
    }
  }

  if (check == temp)
  {
    cout << s << endl;
  }
  else
  {
    cout << ":(" << endl;
  }
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
