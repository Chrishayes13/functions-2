// Inputs: Calculate area- Receives the radius of a circle, calculates and returns the area of the circle.
//         Calculate radius-  Receives the x-y coordinates of the center and point on the circle (as input by the user) and calculates the distance between the points. This value is returned as the radius of the circle.
//         calculate circumference- Receives the radius of a circle, calculates and returns the perimeter of the circle.
// Outputs:  should clearly display the radius, area, and perimeter of the resulting circle.
// proccessing: distance =  area= 

#include <iostream>
#include <cmath>
constexpr auto PI = 3.14156;

using namespace std;

int calculateRadius(float x1, float x2, float y1, float y2);
int calculateArea(float radius);
int calculateCircumference(float radius);

int main()
{
    float x1;
    float x2;
    float y1;
    float y2;

    cout << "Please enter the first X Coordinate: " << endl;
    cin >> x1;
    cout << "Please enter the first Y Coordinate: " << endl;
    cin >> y1;

    cout << "Please enter the second X Coordinate: " << endl;
    cin >> x2;
    cout << "Please enter the second Y Coordinate: " << endl;
    cin >> y2;

    cout << "The radius of the circle is: " << calculateRadius(x1, x2, y1, y2) << endl;
    cout << "The diameter of the circle is: " << endl;
    cout << "The cirfumference of the circle is: " << calculateCircumference(x1) << endl;
    cout << "The area of the circle is: " << calculateArea(x1) << endl;

    system("pause");
    return 0;
}

int calculateRadius(float x1, float x2, float y1, float y2)
{
    float distance;
    float radius;

    distance = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

    radius = (distance / 2);

    return radius;
}

int calculateArea(float radius)
{
    float area;

    area = PI * pow(radius, 2);

    return area;
}

int calculateCircumference(float radius)
{
    float perimeter;

    perimeter = 2 * PI * radius;

    return perimeter;
}
