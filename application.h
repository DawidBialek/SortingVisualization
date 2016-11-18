#ifndef APPLICATION_H
#define APPLICATION_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "plane.h"

using namespace std;

class application
{
	public:
		sf::RenderWindow window;
		sf::Vector2i windowSize;
		plane plane;

		application();
		void run();
	private:
};

#endif
