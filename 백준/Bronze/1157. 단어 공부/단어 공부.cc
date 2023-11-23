#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string word;
  int cnt[26];

  cin >> word;

  for (int &i : cnt)
  {
    i = 0;
  }

  for (char &c : word)
  {
    c = toupper(c);
    cnt[(int)(c - 'A')]++;
  }

  int maxCnt = 0;
  char ans;

  for (int i = 0; i < 26; i++)
  {
    if (cnt[i] == 0)
      continue;

    if (maxCnt < cnt[i])
    {
      maxCnt = cnt[i];
      ans = (char)(i + 'A');
      continue;
    }

    if (maxCnt == cnt[i])
    {
      ans = '?';
    }
  }

  cout << ans << endl;

  return 0;
}