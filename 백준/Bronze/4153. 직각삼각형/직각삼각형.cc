#include <iostream>
#include <cmath>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    string rst = "";

    while (true)
    {

        int a, b, c, side1, side2, longSide;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
        {
            cout << rst;
            return 0;
        }

        side1 = a;
        side2 = b;
        longSide = c;

        if (a > b && a > c)
        {
            swap(side1, longSide);
        }
        else if (b > a && b > c)
        {
            swap(side2, longSide);
        }

        if (pow(longSide, 2) == pow(side1, 2) + pow(side2, 2))
        {
            rst.append("right\n");
        }
        else
        {
            rst.append("wrong\n");
        }
    }
    cout << rst;
    return 0;
}