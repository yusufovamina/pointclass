#include<iostream>
#include"pointclass.h"
#include"file.h"
using namespace std;
	

int main() {

Point point1;
	point1.get_info();
	point1.show_info();
	save(point1);
	//point1.setX(0);// для проверки работы функции load

	load(point1);
	cout << endl;
	point1.show_info();
}