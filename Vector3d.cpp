#include "Vector3d.h"
void Vector3d::printShort()
{
	cout<<"Short data is:"<<xEnd-xStart<<" "<<yEnd-yStart<<" "<<zEnd-zStart<<"\n";
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
	cout<<"Full data is:{"<<xStart<<";"<<yStart<<";"<<zStart<<"} {"<<xEnd<<";"<<yEnd<<";"<<zEnd<<"}, value is:"<<len<<"\n";
}

void Vector3d::copy(IManageable* object)
{
	Vector3d* tmp_object=(Vector3d*)object;
	tmp_object->len=len;
	tmp_object->xStart=xStart;
	tmp_object->xEnd=xEnd;
	tmp_object->yStart=yStart;
	tmp_object->yEnd=yEnd;
	tmp_object->zStart=zStart;
	tmp_object->zEnd=zEnd;
}

bool Vector3d::isEqual(IManageable* object)
{
	Vector3d* tmp_object=(Vector3d*)object;
	if(tmp_object->xStart==xStart&&tmp_object->xEnd==xEnd&&tmp_object->yStart==yStart&&tmp_object->yEnd==yEnd&&tmp_object->zStart==zStart&&tmp_object->zEnd==zEnd)
		return true;
	return false;
}

float Vector3d::value()
{
	return len;
}