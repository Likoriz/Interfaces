#pragma once
#include "IManageable.h"
#include "vectorsInstruments.h"
class Vector3d : public IManageable
{
private:
	float xStart, yStart, zStart, xEnd, yEnd, zEnd, len;
public:
	Vector3d();
	void printShort();
	void printFull();
	void copy(IManageable* object);
	bool isEqual(IManageable* object);
	float value();
};

