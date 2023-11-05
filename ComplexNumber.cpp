#include "ComplexNumber.h"
#define _USE_MATH_DEFINES
#include "math.h"


void ComplexNumber::printShort()
{
	std::cout << "Short data is:" << RealVal << "+" << "(" << ImageVal << ")" << "i";
}

ComplexNumber::ComplexNumber()
{
	initCoords(RealVal);
	initCoords(ImageVal);
	len = sqrtf((RealVal) * (RealVal)+(ImageVal) * (ImageVal));
}


void ComplexNumber::printFull()
{
	cout << "Full data is:" << RealVal << "+" << "(" << ImageVal << ")" << "i " << "len = " << len;
}

void ComplexNumber::copy(ICopyable* object)
{
	ComplexNumber* tmp_object = (ComplexNumber*)object;
	len = tmp_object->len;
	RealVal = tmp_object->RealVal;
	ImageVal = tmp_object->ImageVal;

}

bool ComplexNumber::isEqual(IManageable* object)
{
	ComplexNumber* tmp_object = (ComplexNumber*)object;
	if (tmp_object->RealVal == RealVal && tmp_object->ImageVal == ImageVal)
		return true;
	return false;
	//if (len == object->value())
	//	return 1;
	//else
	//	return 0;
}

float ComplexNumber::value()
{
	return len;
}
