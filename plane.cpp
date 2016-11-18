#include "plane.h"

void plane::getDataFormUser(sf::Vector2i windowSize)
{
	do
	{
	cout << "Which sorting alorithm would you like to choose?" << endl
		<< "\t1 - Bubble Sort" << endl
		<< "The rest is WIP" << endl;
		cin >> whichSortingAlgorithm;
	} while (whichSortingAlgorithm != 1);
	
	do
	{
	cout << "Values will be:" << endl
		<< "\t0 - Written from keyboard" << endl
		<< "\t1 - Generated" << endl;
		cin >> areValuesGenerated;
	} while (areValuesGenerated != 0 && areValuesGenerated != 1);

	do
	{
		cout << "Set the amount of elements: ";
		cin >> amountOfElements;
	} while (amountOfElements < 2);

	do
	{
		cout << "Set the range of elements values: ";
		cout << "min: ";
		cin >> elementsValueRange.x;
		cout << "max: ";
		cin >> elementsValueRange.y;
	} while (elementsValueRange.x >= 0 && elementsValueRange.y >= elementsValueRange.x);
}

plane::plane(sf::Vector2i windowSize)
{
	cout << "ctor working" << endl;
	this->getDataFormUser(windowSize);
	//this->setElementsValues();
}

void plane::setElementsValues(vector<unsigned int>& elementsVector, const unsigned int &amountOfElements)
{

}
