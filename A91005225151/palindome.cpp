#include <iostream>
using namespace std;

int main()
{
    int num, rem, rev = 0;
    cout << "Enter number:" << endl;
    cin >> num;

    int temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp = temp / 10;
    }

    if (num == rev)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}