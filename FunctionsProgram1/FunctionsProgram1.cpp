// FunctionsProgram1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program takes a center point and a point on the circumference of a circle, and outputs the radius,
//the circumference, and the area of that circle

#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>


using namespace std;
const float pi = 3.1416;

//Takes the first x coordiante as an input
//Preconditions - None
//Postconditions - Returns the x component of the first coordinate
float getx1();

//Takes the first y coordiante as an input
//Preconditions - None
//Postconditions - Returns the y component of the first coordinate
float gety1();

//Takes the second x coordiante as an input
//Preconditions - None
//Postconditions - Returns the x component of the second coordinate
float getx2();

//Takes the second y coordiante as an input
//Preconditions - None
//Postconditions - Returns the y component of the second coordinate
float gety2();


//Takes the coordinates and calculates the distance between the points
//Preconditions - getRadius
//Postconditions - Returns the distance between the two points
float getDistance(float x1, float y1, float x2, float y2);

//Takes the getDistance function and applies it to the radius of the circle
//Preconditions - The coordinates of a center point and a point on the circumference of a circle
//Postconditions - Returns the radius of the circle
float getRadius(float x1, float y1, float x2, float y2);

//Takes in the radius and calculates the circumference of a circle
//Preconditions - getRadius
//Postconditions - Returns the circumference of the circle
float getCircumference(float radius);

//Takes in the radius and calculates the area of a circle
//Preconditions - getRadius
//Postconditions - Returns the area of the circle
float getArea(float radius);

int main()
{
    float x1 = getx1();
    float y1 = gety1();
    float x2 = getx2();
    float y2 = gety2();
    float radius = getRadius(x1, y1, x2, y2);
    float circumference = getCircumference(radius);
    float area = getArea(radius);

    cout << "Coordinate 1: (" << x1 << "," << y1 << ")" << endl;
    cout << "Coordinate 2: (" << x2 << "," << y2 << ")" << endl;
    cout << "Radius of the circle: " << radius << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    cout << "Area of the circle: " << area << endl;

    return 0;
}

float getx1()
{
    float x1 = 0;
    cout << "First x coordinate: " << endl;
    cin >> x1;
    return x1;
}

float gety1()
{
    float y1 = 0;
    cout << "First y coordinate: " << endl;
    cin >> y1;
    return y1;
}

float getx2()
{
    float x2 = 0;
    cout << "Second x coordinate: " << endl;
    cin >> x2;
    return x2;
}

float gety2()
{
    float y2 = 0;
    cout << "Second y coordinate: " << endl;
    cin >> y2;
    return y2;
}

float getDistance(float x1, float y1, float x2, float y2)
{
    float distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return distance;
}

float getRadius(float x1, float y1, float x2, float y2)
{
    float radius = getDistance(x1, y1, x2, y2);
    return radius;
}

float getCircumference(float radius)
{
    float circumference = radius * 2 * pi;
    return circumference;
}

float getArea(float radius)
{
    float area = pow((radius * pi), 2);
    return area;
}