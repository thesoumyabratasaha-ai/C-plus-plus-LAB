#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, oNum, rem, result = 0, n = 0;

    cout << "Enter an integer: ";
    cin >> num;

    oNum = num;

    while (oNum != 0)
    {
        oNum /= 10;
        n++;
    }

    oNum = num;

    while (oNum != 0)
    {
        rem = oNum % 10;
        result += round(pow(rem, n));
        oNum /= 10;
    }

    if (result == num)
        cout << "Armstrong number" << endl;
    else
        cout << "Not Armstrong number" << endl;

    return 0;
}