
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;

    int choice;
    double radius, length, width, base, height, area;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << fixed << setprecision(5);

    if (choice == 1)
    {
        cout << "Enter the radius: ";
        cin >> radius;

        if (radius < 0)
        {
            cout << "Error: Radius cannot be negative." << endl;
        }
        else
        {
            area = PI * radius * radius;
            cout << "Area of the circle: " << area << endl;
        }
    }
    else if (choice == 2)
    {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;

        if (length < 0 || width < 0)
        {
            cout << "Error: Length and width cannot be negative." << endl;
        }
        else
        {
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
        }
    }
    else if (choice == 3)
    {
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the height: ";
        cin >> height;

        if (base < 0 || height < 0)
        {
            cout << "Error: Base and height cannot be negative." << endl;
        }
        else
        {
            area = base * height * 0.5;
            cout << "Area of the triangle: " << area << endl;
        }
    }
    else if (choice == 4)
    {
        cout << "Goodbye!" << endl;
    }
    else
    {
        cout << "Error: Invalid menu choice." << endl;
    }

    return 0;
}
