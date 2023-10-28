#include "GlobalFunctions.h"
//��������� ��� ���������� ������� ��� �� ��������

void sort(IManageable** objects, int size)//IValue**
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
		{
			if (objects[i]->value() < objects[j]->value())
			{
				IManageable* tmp = objects[i];
				objects[i] = objects[j];
				objects[j] = tmp;
			}
		}
}

float min(IManageable** objects, int size)//IValue**
{
	int min = objects[0]->value();

	for (int i = 1; i < size; i++)
	{
		float val = objects[i]->value();
		if (min > val)
			min = val;
	}

	return min;
}

float max(IManageable** objects, int size)//IValue**
{
	int max = objects[0]->value();

	for (int i = 1; i < size; i++)
	{
		float val = objects[i]->value();
		if (max < val)
			max = val;
	}

	return max;
}

int find(IManageable** objects, int size, float value)//IValue**
{
	int index = -1;

	for (int i = 0; i < size; i++)
	{
		float val = objects[i]->value();
		if (value == val)
			index = i;
	}

	return index;
}

void printLine(IManageable** objects, int size)//IPrintable**
{
	for (int i = 0; i < size; i++)
	{
		objects[i]->printShort();
		cout << "     ";
	}
}

void printColumn(IManageable** objects, int size)//IPrintable**
{
	for (int i = 0; i < size; i++)
	{
		objects[i]->printFull();
		cout << endl;
	}
}

float totalSum(IManageable** objects, int size)//IValue**
{
	float sum = 0;

	for (int i = 0; i < size; i++)
		sum += objects[i]->value();

	return sum;
}

int countInRange(IManageable** objects, int size, float A, float B)//IValue**
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		float val = objects[i]->value();
		if (val > A && val < B)
			count++;
	}

	return count;
}

void printPikes(IManageable** objects, int size)
{
	objects[0]->printFull();
	cout << endl;

	for (int i = 1; i < size - 1; i++)
	{
		if (objects[i]->value() > objects[i - 1]->value() && objects[i]->value() > objects[i + 1]->value())
		{
			objects[i]->printFull();
			cout << endl;
		}
		else
			if (objects[i]->value() < objects[i - 1]->value() && objects[i]->value() < objects[i + 1]->value())
			{
				objects[i]->printFull();
				cout << endl;
			}
	}

	objects[size - 1]->printFull();
	cout << endl;
}

void makeCopy()
{

}

void join()
{

}

void append()
{

}

void printUnique()
{

}