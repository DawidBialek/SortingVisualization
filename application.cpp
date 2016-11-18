#include "application.h"

application::application() : windowSize(1280, 720)
{
	window.create(sf::VideoMode(windowSize.x,windowSize.y), "Sorting Visualization ver. 0.01");
};

void application::run()
{
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
				window.close();
		}


		window.clear();
		window.display();
	}
}