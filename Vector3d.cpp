#include "Vector3d.h"
void Vector3d::printShort()
{
	cout<<"Short data is:"<<xEnd-xStart<<" "<<yEnd-yStart<<" "<<zEnd-zStart;
}

Vector3d::Vector3d()
{
	initCoords(xStart);
	initCoords(xEnd);
	initCoords(yStart);
	initCoords(yEnd);
	initCoords(zStart);
	initCoords(zEnd);
	len=sqrtf((xEnd-xStart)*(xEnd-xStart)+(yEnd-yStart)*(yEnd-yStart)+(zEnd-zStart)*(zEnd-zStart));
}


void Vector3d::printFull()
{
	cout<<"Full data is:{"<<xStart<<";"<<yStart<<";"<<zStart<<"} {"<<xEnd<<";"<<yEnd<<";"<<zEnd<<"}, value is:"<<len;
}

void Vector3d::copy(ICopyable* object)
{
	Vector3d* tmp_object=(Vector3d*)object;
	len = tmp_object->len;
	//tmp_object->len=len;
	xStart = tmp_object->xStart;
	//tmp_object->xStart=xStart;
	xEnd = tmp_object->xEnd;
	//tmp_object->xEnd=xEnd;
	yStart = tmp_object->yStart;
	//tmp_object->yStart=yStart;
	yEnd = tmp_object->yEnd;
	//tmp_object->yEnd=yEnd;
	zStart = tmp_object->zStart;
	//tmp_object->zStart=zStart;
	zEnd = tmp_object->zEnd;
	//tmp_object->zEnd=zEnd;
}

bool Vector3d::isEqual(IManageable* object)
{
	Vector3d* tmp_object=(Vector3d*)object;
	if(tmp_object->xStart==xStart&&tmp_object->xEnd==xEnd&&tmp_object->yStart==yStart&&tmp_object->yEnd==yEnd&&tmp_object->zStart==zStart&&tmp_object->zEnd==zEnd)
		return true;
	return false;
	//if (len == object->value())
	//	return 1;
	//else
	//	return 0;
}

float Vector3d::value()
{
	return len;
}