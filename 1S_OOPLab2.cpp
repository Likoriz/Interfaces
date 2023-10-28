#include "Text.h"
#include "Vector2d.h"
#include "Vector3d.h"
#define SIZE 10

int main()
{
	/*
	Все, что находится в main на данный момент является тестом для функций.
	При разработке своих виртуальных функций можете дописывать сюда что-нибудь.
	*/
	srand(time(NULL));

	IManageable** object = new IManageable*[SIZE];
	for (int i = 0; i < SIZE; i++)
		object[i] = new Vector2d();

	//object[5]->copy(object[6]);
	//cout << object[5]->isEqual(object[6]) << endl;
	//cout << object[4]->isEqual(object[5]) << endl;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	object[i]->printShort();
	//	//object[i]->printFull();
	//	cout << endl;
	//}

	cout << "SORTED MAS: " << endl;
	sort(object, SIZE);

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

	cout << "SUM: " << totalSum(object, SIZE) << endl;
}
