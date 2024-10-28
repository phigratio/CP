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
bool isPalindrome(string str)
{

  bool flag = true;
  int start = 0;
  int end = str.size() - 1;
  while (start < end)
  {
    if (str[start] == str[end])
    {
      start++;
      end--;
    }
    else
    {
      flag = false;
      break;
    }
  }

  return flag;
}

void muqtu()
{
  string str;
  cin >> str;

  if (!isPalindrome(str))
    cout << str.size() << endl;
  else
  {
    int sz = unique(str.begin(), str.end()) - str.begin();
    if (sz == 1)
    {
      cout << "0" << endl;
    }
    else
    {
      cout << str.size() - 1 << endl;
    }
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