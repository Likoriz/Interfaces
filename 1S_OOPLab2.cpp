#include "Text.h"
#include "Vector2d.h"
#include "Vector3d.h"
#include "Vector2d.h"
#include "ComplexNumber.h"

int main()
{
	srand(time(NULL));

	int SIZE = 12;

	//MASS
	IManageable** objectText = new IManageable * [SIZE];
	for (int i = 0; i < SIZE; i++)
		objectText[i] = new Text();

	IManageable** objectVector2d = new IManageable * [SIZE];
	for (int i = 0; i < SIZE; i++)
		objectVector2d[i] = new Vector2d();

	IManageable** objectVector3d = new IManageable * [SIZE];
	for (int i = 0; i < SIZE; i++)
		objectVector3d[i] = new Vector3d();

	IManageable** objectComplex = new IManageable * [SIZE];
	for (int i = 0; i < SIZE; i++)
		objectComplex[i] = new ComplexNumber();

	//COPY MASS
	IManageable** objectTextCopied = new IManageable * [SIZE];
	for (int i = 0; i < SIZE; i++)
		objectTextCopied[i] = new Text();

	IManageable** objectVector2dCopied = new IManageable * [SIZE];
	for (int i = 0; i < SIZE; i++)
		objectVector2dCopied[i] = new Vector2d();

	IManageable** objectVector3dCopied = new IManageable * [SIZE];
	for (int i = 0; i < SIZE; i++)
		objectVector3dCopied[i] = new Vector3d();

	IManageable** objectComplexCopied = new IManageable * [SIZE];
	for (int i = 0; i < SIZE; i++)
		objectComplexCopied[i] = new ComplexNumber();

	int action;
	int a;
	bool isRunning = true;
	float val, A, B;
	IManageable* element = new Text();
	IManageable** objects = nullptr;
	IManageable** objectsCopied = nullptr;

	do
	{
		cout << "Enter mas type (0 - text, 1 - vector2d, 2 - vector3d, 3 - complex): ";
		cin >> a;
	} while (a < 0 && a > 3);

	switch (a)
	{
	case 0:
		objects = objectText;
		objectsCopied = objectTextCopied;
		break;
	case 1:
		objects = objectVector2d;
		objectsCopied = objectVector2dCopied;
		break;
	case 2:
		objects = objectVector3d;
		objectsCopied = objectVector3dCopied;
		break;
	case 3:
		objects = objectComplex;
		objectsCopied = objectComplexCopied;
		break;
	}

	do
	{
		system("cls");
		printColumn(objects, SIZE);

		do
		{
			cout << endl << "Choose action (0 - exit, 1 - sort, 2 - min, 3 - max, 4 - find, 5 - printLine, 6 - printColumn, 7 - totalSum, 8 - countInRange, 9 - printPikes, 10 - makeCopy, 11 - join, 12 - append, 13 - printUnique): ";
			cin >> action;
			cout << endl;
		} while (action < 0 && action > 14);

		switch (action)
		{
		case 0://EXIT
			isRunning = false;
			break;
		case 1://SORT
			sort(objects, SIZE);
			break;
		case 2://MIN
			cout << "MIN: " << min(objects, SIZE) << endl;
			break;
		case 3://MAX
			cout << "MAX: " << max(objects, SIZE) << endl;
			break;
		case 4://FIND INDEX
			cout << "Enter value: ";
			cin >> val;
			cout << "FOUND INDEX: " << find(objects, SIZE, val) << endl;
			break;
		case 5://PRINT LINE
			printLine(objects, SIZE);
			cout << endl << endl;
			break;
		case 6://PRINT COLUMN
			printColumn(objects, SIZE);
			cout << endl << endl;
			break;
		case 7://TOTAL SUM
			cout << "SUM: " << totalSum(objects, SIZE) << endl << endl;
			break;
		case 8://COUNT IN RANGE
			cout << "Enter A (begin) and B (end): ";
			cin >> A >> B;
			cout << "RANGE COUNT: " << countInRange(objects, SIZE, A, B) << endl << endl;
			break;
		case 9://PRINT PIKES
			cout << "PIKES: " << endl;
			printPikes(objects, SIZE);
			cout << endl;
			break;
		case 10://MAKE COPY
			makeCopy(objects, SIZE, objectsCopied);
			cout << "COPIED MAS: " << endl;
			printColumn(objectsCopied, SIZE);
			break;
		case 11://JOIN/////////////////////////////////
			objects = join(objects, SIZE, objectsCopied, SIZE, a);
			break;
		case 12://APPEND
			append(objects, SIZE, element);//////////////////////////////
			break;
		case 13://PRINT UNIQUE
			cout << endl << "UNIQUE: " << endl;
			printUnique(objects, SIZE);
			break;
		}
		system("pause");
	} while (isRunning);

	return 0;
}
