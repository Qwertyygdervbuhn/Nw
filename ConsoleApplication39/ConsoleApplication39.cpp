#include <iostream>
using namespace std;

class Circle {
    double radius;

public:
    Circle(double r = 0) : radius(r) {}

    bool operator==(const Circle& other) const {
        return radius == other.radius;
    }

    bool operator>(const Circle& other) const {
        return (2 * radius) > (2 * other.radius);
    }

  
    void operator+=(double value) {
        radius += value;
    }

    void operator=(double newRadius) {
        radius = newRadius;
    }

 
    void print() const {
        cout << "Radius: " << radius << ", Circumference: " << 2 * radius << endl;
    }
};

int main() {
    Circle c1(5.0);
    Circle c2(7.0);

    c1.print();
    c2.print();

    if (c1 == c2) {
        cout << "Circles have equal radii." << endl;
    }
    else {
        cout << "Circles have different radii." << endl;
    }

    if (c1 > c2) {
        cout << "Circle c1 is larger than Circle c2." << endl;
    }
    else {
        cout << "Circle c2 is larger than Circle c1." << endl;
    }

    c1 += 3.0;
    cout << "After increasing radius of c1: ";
    c1.print();

    c2 = 10.0;
    cout << "After setting new radius for c2: ";
    c2.print();

   
}
