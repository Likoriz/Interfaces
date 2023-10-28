#pragma once
#include "IManageable.h"
#include "vectorsInstruments.h"
class Vector2d : public IManageable
{	private:
		float xStart, yStart, xEnd, yEnd, len;
	public:
		Vector2d();
		void printShort();
		void printFull();
		void copy(IManageable* object);
		bool isEqual(IManageable* object);
		float value();
		
}; 

