#pragma once
#include<iostream>

class Point
{
private:
	int x;
	int y;
	int z;
public:
    void setX(int value);
    
    int getX();

    void setY(int value);

    int getY();

    void setZ(int value);

    int getZ();

    void get_info();
    void show_info();

};