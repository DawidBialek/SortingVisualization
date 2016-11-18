#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;

class element
{
	public:
		sf::Vector2f size;
		sf::Color color;
		sf::Sound sound;

		element(sf::Vector2f size);
};

#endif