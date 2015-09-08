#include <iostream>
#include <iomanip>  //needed for setpercision
#include "Point.h"  // needed for Point class
#include <cmath>    //need for sqrt()

using namespace std;
//function prototypes
double computeArea(Point& A, Point& B, Point& C);

int main() {

    Point A ;
    Point B ;
    Point C ;
        cout << "Hello-world\n" << "Welcome to your 3D triangle Area computing Program\n";
    // ill use a for loop to for each point to gather user data
    cout << "Please enter the 'X', 'Y', and 'Z' cordinates in that order for the 1st Point\n";
    for(int i = 0; i < 3; i++) {
        double PointInput; // temporary value for x,y,z to be stored in an object
        cin >> PointInput;
       if(i == 0)
           A.setX(PointInput);
        if(i == 1);
             A.setY(PointInput);
        if(i == 2);
            A.setZ(PointInput);
    }
    cout << "Please enter the 'X', 'Y', and 'Z' cordinates in that order for the 2nd Point\n";
    for(int i = 0; i < 3; i++) {
        double PointInput; // temporary value for x,y,z to be stored in an object
        cin >> PointInput;
        if(i == 0)
            B.setX(PointInput);
         if(i == 1);
             B.setY(PointInput);
          if(i == 2);
              B.setZ(PointInput);
    }
    cout << "Please enter the 'X', 'Y', and 'Z' cordinates in that order for the 3rd Point\n";
    for(int i = 0; i < 3; i++) {
        double PointInput; // temporary value for x,y,z to be stored in an object
        cin >> PointInput;
        if(i == 0)
            C.setX(PointInput);
        if(i == 1);
            C.setY(PointInput);
        if(i == 2);
            C.setZ(PointInput);
    }
    //Now i'm calling the compute area function while setting precision to 2
    cout << "The area of your Triangle is: ";
    cout << fixed << setprecision(2) << computeArea(A, B, C);

return 0;
}
// computeArea...
// Takes a 3 point reference and then finds the area
double computeArea(Point &A, Point &B, Point &C) {
    double side1 = A.distanceTo(B);
    double side2 = B.distanceTo(C);
    double side3 = C.distanceTo(A);
        return .25 * (sqrt((side1 + side2 + side3) * (side1 + side2 - side3) * (side1 - side2 + side3) * (side1 + side2 - side3)));//Heron's theory
}

