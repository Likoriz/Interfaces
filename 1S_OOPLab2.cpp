#include "Text.h"
#include "Vector2d.h"
#include "Vector3d.h"
#define SIZE 9
#include "Vector2d.h"

int main()
{
	srand(time(NULL));

	IManageable** object = new IManageable * [SIZE];
	for (int i = 0; i < 3; i++)
		object[i] = new Text();
	for (int i = 3; i < 6; i++)
		object[i] = new Vector2d();
	for (int i = 6; i < 9; i++)
		object[i] = new Vector3d();

	IManageable** objectCopied = new IManageable * [SIZE];
	for (int i = 0; i < 3; i++)
		objectCopied[i] = new Text();
	for (int i = 3; i < 6; i++)
		objectCopied[i] = new Vector2d();
	for (int i = 6; i < 9; i++)
		objectCopied[i] = new Vector3d();

	int action;
	bool isRunning = true;
	float val, A, B;

	do
	{
		system("cls");
		printColumn(object, SIZE);

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
			sort(object, SIZE);
			break;
		case 2://MIN
			cout << "MIN: " << min(object, SIZE) << endl;
			break;
		case 3://MAX
			cout << "MAX: " << max(object, SIZE) << endl;
			break;
		case 4://FIND INDEX
			cout << "Enter value: ";
			cin >> val;
			cout << "FOUND INDEX: " << find(object, SIZE, val) << endl;
			break;
		case 5://PRINT LINE
			printLine(object, SIZE);
			cout << endl << endl;
			break;
		case 6://PRINT COLUMN
			printColumn(object, SIZE);
			cout << endl << endl;
			break;
		case 7://TOTAL SUM
			cout << "SUM: " << totalSum(object, SIZE) << endl << endl;
			break;
		case 8://COUNT IN RANGE
			cout << "Enter A (begin) and B (end): ";
			cin >> A >> B;
			cout << "RANGE COUNT: " << countInRange(object, SIZE, A, B) << endl << endl;
			break;
		case 9://PRINT PIKES
			cout << "PIKES: " << endl;
			printPikes(object, SIZE);
			cout << endl;
			break;
		case 10://MAKE COPY
			makeCopy(object, SIZE, objectCopied);
			cout << "COPIED MAS: " << endl;
			printColumn(objectCopied, SIZE);
			break;
		case 11://JOIN

			break;
		case 12://APPEND

			break;
		case 13://PRINT UNIQUE
			cout << endl << "UNIQUE: " << endl;
			printUnique(object, SIZE);
			break;
		}
		system("pause");
	} while (isRunning);

	return 0;
}
