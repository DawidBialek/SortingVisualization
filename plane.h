#ifndef PLANE_H
#define PLANE_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

using namespace std;

class plane
{
	public:
		unsigned short whichSortingAlgorithm;
		unsigned int amountOfElements;
		bool areValuesGenerated;

		sf::Vector2i elementsValueRange;
		vector<unsigned int> elementsVector;

		plane(sf::Vector2i windowSize);
		void createElementsVector();
		void getDataFormUser(sf::Vector2i windowSize);
		void setElementsValues(vector<unsigned int> &elementsVector, const unsigned int &amountOfElements);
};

#endif
