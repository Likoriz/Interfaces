#include "Text.h"
#include "Vector2d.h"
#include "Vector3d.h"
#include "ComplexNumber.h"

void sort(IManageable** objects, int size)
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

float min(IManageable** objects, int size)
{
	float min = objects[0]->value();

	for (int i = 1; i < size; i++)
	{
		float val = objects[i]->value();
		if (min > val)
			min = val;
	}

	return min;
}

float max(IManageable** objects, int size)
{
	float max = objects[0]->value();

	for (int i = 1; i < size; i++)
	{
		float val = objects[i]->value();
		if (max < val)
			max = val;
	}

	return max;
}

int find(IManageable** objects, int size, float value)
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

void printLine(IManageable** objects, int size)
{
	for (int i = 0; i < size; i++)
	{
		objects[i]->printShort();
		cout << "     ";
	}
}

void printColumn(IManageable** objects, int size)
{
	for (int i = 0; i < size; i++)
	{
		objects[i]->printFull();
		cout << endl;
	}
}

float totalSum(IManageable** objects, int size)
{
	float sum = 0;

	for (int i = 0; i < size; i++)
		sum += objects[i]->value();

	return sum;
}

int countInRange(IManageable** objects, int size, float A, float B)
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

void makeCopy(IManageable** objects, int size, IManageable** objectsCopied)
{
	for (int i = 0; i < size; i++)
		objectsCopied[i]->copy(objects[i]);
}

IManageable** join(IManageable** objects, int& size, IManageable** objectsCopied, int size1, int a)
{
	int new_size = size + size1;
	IManageable** new_arr = new IManageable * [new_size];

	for (int i = 0; i < new_size; i++) 
		switch (a) 
		{
		case 0:
			for (int i = 0; i < new_size; i++)
				new_arr[i] = new Text();
			break;
		case 1:
			for (int i = 0; i < new_size; i++)
				new_arr[i] = new Vector2d();
			break;
		case 2:
			for (int i = 0; i < new_size; i++)
				new_arr[i] = new Vector3d();
			break;
		case 3:
			for (int i = 0; i < new_size; i++)
				new_arr[i] = new ComplexNumber();
			break;
		}

	for (int i = 0; i < size; i++)
		new_arr[i]->copy(objects[i]);

	for (int i = size; i < new_size; i++)
		new_arr[i]->copy(objectsCopied[i-size]);

	size = new_size;

	return new_arr;
}

IManageable** append(IManageable** objects, int& size, int a)////////////////////////////////////////////////////
{
	int new_size = size + 1;
	IManageable** new_arr = new IManageable * [new_size];

	for (int i = 0; i < new_size; i++) {
		switch (a)
		{
		case 0:
			for (int i = 0; i < new_size; i++)
				new_arr[i] = new Text();
			break;
		case 1:
			for (int i = 0; i < new_size; i++)
				new_arr[i] = new Vector2d();
			break;
		case 2:
			for (int i = 0; i < new_size; i++)
				new_arr[i] = new Vector3d();
			break;
		case 3:
			for (int i = 0; i < new_size; i++)
				new_arr[i] = new ComplexNumber();
			break;
		}
	}
	for (int i = 0; i < size; i++)
		new_arr[i]->copy(objects[i]);

	size = new_size;

	return new_arr;
}

void printUnique(IManageable** objects, int size)
{
	for (int i = 0; i < size; i++)
	{
		bool isUnique = true;
		for (int j = i + 1; j < size; j++)
			if (objects[i]->isEqual(objects[j]))
			{
				isUnique = false;
				break;
			}

		if (isUnique)
			cout << objects[i]->value() << endl;
	}
}