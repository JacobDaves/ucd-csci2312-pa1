//
// Created by Jacob on 9/7/2015.
//
#include <cmath> // needed for sqrt() and pow()
#include "Point.h" // needed to use Point class

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;

}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ) {
    x = initX;
    y = initY;
    z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
    // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}
void Point::setZ(double newZ){
    z = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}
double Point::getZ() {
    return z;
}
//member functions
double Point::distanceTo(Point& OtherPoint) const{
    return sqrt(pow((x - OtherPoint.x),2) + pow((y - OtherPoint.y),2) + pow((z - OtherPoint.z),2));
} // Calculates the distance between the point and the one passed

