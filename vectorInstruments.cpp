#include <iostream>
void initCoords(float& coord)
{
	coord=rand()%100/10;
	if(rand()%2)
		coord*=-1;
}