#include "Text.h"
#include "Vector2d.h"
#include "Vector3d.h"
#define SIZE 10-1

int main()
{
	/*
	Все, что находится в main на данный момент является тестом для функций.
	При разработке своих виртуальных функций можете дописывать сюда что-нибудь.
	*/
	srand(time(NULL));

	IManageable** object = new IManageable*[SIZE];
	for (int i = 0; i < 3; i++)
		object[i] = new Text();
	for(int i=3; i<6; i++)
		object[i]=new Vector2d();
	for(int i=6; i<9; i++)
		object[i]=new Vector3d();

	for (int i = 0; i < SIZE; i++)
	{
		object[i]->printShort();
		cout << endl;
	}
	cout << endl;

	cout << "MIN: " << min(object, SIZE) << endl;
	cout << "MAX: " << max(object, SIZE) << endl;
	cout << "FIND INDEX: " << find(object, SIZE, 100) << endl;

	printLine(object, SIZE);
	cout << endl << endl;

	printColumn(object, SIZE);
	cout << endl;

	cout << "SUM: " << totalSum(object, SIZE) << endl << endl;

	cout << "RANGE COUNT: " << countInRange(object, SIZE, 50, 70) << endl << endl;
	
	cout << "PIKES: " << endl;
	printPikes(object, SIZE);
	cout << endl;

	cout << "SORTED MAS: " << endl;
	sort(object, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		object[i]->printFull();
		cout << endl;
	}
}
