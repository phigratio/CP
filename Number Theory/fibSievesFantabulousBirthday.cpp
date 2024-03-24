#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void muqtu()
{
  ll secs, root, lack, row, col;
  cin >> secs;
  root = ceil(sqrt(secs * 1.0));
  lack = pow(root, 2) - secs;
  if (lack < root)
  {
    row = root;
    col = lack + 1;
  }
  else
  {
    col = root;
    row = secs - (pow((root - 1), 2));
  }

  if (root % 2 == 0)
  {
    ll temp = col;
    col = row;
    row = temp;
  }

  cout << col << " " << row << endl;
}

int main()
{
  faster;
  ll t;
  cin >> t;
  for (ll i = 1; i <= t; i++)
  {
    cout << "Case " << i << ": ";
    muqtu();
  }
  return 0;
}
