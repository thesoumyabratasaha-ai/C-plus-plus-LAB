#include <iostream>
using namespace std;

class Shape
{
private:
    float radius, length, width;

public:
    Shape(float r, float l, float w)
    {
        cout << "\n # Constructor called...\n";
        radius = r;
        length = l;
        width = w;
    }

    float perimeter(float r) // function overloading (compile time polymorphism)
    {
        return 2 * 3.14159 * r;
    }

    float perimeter(float l, float w)
    {
        return 2 * (l + w);
    }

    ~Shape() // DESTRUCTOR
    {
        cout << " # Destructor called...\n";
    }
};

int main()
{
    int choice;
    float radius, length, width;

    do
    {
        cout << "\n---- MENU ----\n";
        cout << "1. Perimeter of circle\n";
        cout << "2. Perimeter of rectangle\n";
        cout << "3. Exit program...\n";
        cout << "--------------\n";
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;

            {
                Shape s(radius, 0, 0);
                cout << "Perimeter of circle = "
                     << s.perimeter(radius) << endl;
            }
            break;

        case 2:
            cout << "Enter length and width: ";
            cin >> length >> width;

            {
                Shape s(0, length, width);
                cout << "Perimeter of rectangle = "
                     << s.perimeter(length, width) << endl;
            }
            break;

        case 3:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid choice. Please try again.";
        }

    } while (choice != 3);

    return 0;
}