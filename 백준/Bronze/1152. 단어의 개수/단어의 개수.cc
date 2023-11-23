#include <iostream>
#include <string>
using namespace std;

int main()
{
  string sentence;
  getline(cin, sentence);
  bool flag = false;
  int cnt = 0;

  for (char &c : sentence)
  {
    if (!flag && (c != ' '))
    {
      cnt++;
      flag = true;
    }

    if (flag && (c == ' '))
    {
      flag = false;
    }
  }

  cout << cnt << endl;

  return 0;
}