#pragma once
#include"pointclass.h"

void save(Point& point) {
	FILE* file;
	fopen_s(&file, "point.dat", "wb");
	fwrite(&point, sizeof(Point), 1, file);

	fclose(file);
}

void load(Point& point) {
	FILE* file;
	fopen_s(&file, "point.dat", "rb");
	fread(&point, sizeof(Point), 1, file);

	fclose(file);
}

