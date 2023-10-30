#pragma once
#include "GlobalFunctions.h"
#include "vectorsInstruments.h"
class ComplexNumber : public IManageable
{
private:
	float RealVal, ImageVal, len, r, a, b;
public:
	ComplexNumber();
	void printShort();
	void printFull();
	void copy(ICopyable* object);
	bool isEqual(IManageable* object);
	float value();
};

