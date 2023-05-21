#include<iostream>
#include"pointclass.h"
using namespace std;

void Point::setX(int value) {
    x = value;
}

int Point::getX() {
    return x;
}

void Point::setY(int value) {
    y = value;
}

int Point::getY() {
    return y;
}

void Point::setZ(int value) {
    z = value;
}

int Point::getZ() {
    return z;
}

void Point::get_info() {
    int tmp1, tmp2, tmp3;
    cout<<"Enter the x coordinate: ";
    cin >> tmp1; setX(tmp1);
    cout<<"Enter the y coordinate: ";
    cin >> tmp2; setY(tmp2);
    cout << "Enter the z coordinate: ";
    cin >> tmp3; setZ(tmp3);
}

void Point::show_info() {
    cout<<"X coordinate: "<<getX()<<endl;
    cout<<"Y coordinate: "<<getY()<<endl;
    cout<<"Z coordinate: "<<getZ()<<endl;

}

