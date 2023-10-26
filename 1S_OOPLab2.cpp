#include "Text.h"

int main()
{
	/*
	Все, что находится в main на данный момент является тестом для функций.
	При разработке своих виртуальных функций можете дописывать сюда что-нибудь.
	*/
	srand(time(NULL));

	IManageable** object = new IManageable*[10];
	for (int i = 0; i < 10; i++)
		object[i] = new Text();

	object[5]->copy(object[6]);
	cout << object[5]->isEqual(object[6]) << endl;
	cout << object[4]->isEqual(object[5]) << endl;

	for (int i = 0; i < 10; i++)
	{
		object[i]->printShort();
		object[i]->printFull();
		cout << object[i]->value() << endl;
		cout << endl;
	}
}
