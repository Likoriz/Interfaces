#include "Vector2d.h"


void Vector2d::printShort()
{
	cout<<"Short data is:"<<xEnd-xStart<<" "<<yEnd-yStart;
}

Vector2d::Vector2d()
{
	initCoords(xStart);
	initCoords(xEnd);
	initCoords(yStart);
	initCoords(yEnd);
	len=sqrtf((xEnd-xStart)*(xEnd-xStart)+(yEnd-yStart)*(yEnd-yStart));
}


void Vector2d::printFull()
{
	cout<<"Full data is:{"<<xStart<<";"<<yStart<<"} {"<<xEnd<<";"<<yEnd<<"], value is:"<<len;
}

void Vector2d::copy(ICopyable* object)
{
	Vector2d* tmp_object=(Vector2d*)object;
	tmp_object->len=len;
	tmp_object->xStart=xStart;
	tmp_object->xEnd=xEnd;
	tmp_object->yStart=yStart;
	tmp_object->yEnd=yEnd;
}

bool Vector2d::isEqual(IManageable* object)
{
	Vector2d* tmp_object=(Vector2d*)object;
	if(tmp_object->xStart==xStart&&tmp_object->xEnd==xEnd&&tmp_object->yStart==yStart&&tmp_object->yEnd==yEnd)
		return true;
	return false;
}

float Vector2d::value()
{
	return len;
}