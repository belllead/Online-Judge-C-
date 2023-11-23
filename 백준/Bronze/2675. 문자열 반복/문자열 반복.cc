#include <iostream>
#include <string>
using namespace std;

int main()
{
  string word;
  int T;
  int times;

  cin >> T;

  string ans = "";

  for (int tc = 1; tc <= T; tc++)
  {
    cin >> times >> word;

    string line;

    for (char c : word)
    {
      for (int i = 0; i < times; i++)
      {
        line += c;
      }
    }
    ans += line;
    ans += "\n";
  }

  cout << ans;

  return 0;
}