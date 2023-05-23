#include<iostream>
#include"point.h"

using namespace std;
	

int main() {

Point point1;
	point1.get_info();
	point1.show_info();
	point1.save(point1);
	//point1.setX(0);// для проверки работы функции load

	point1.load(point1);
	cout << endl;
	point1.show_info();
}