#include "Cvijet.h"
#include <SFML/Graphics.hpp>
using namespace sf;

Cvijet::Cvijet(RenderWindow *window) : mWindow(*window)
{
	{
		
	}
}

void Cvijet::draw()
{
	while (mWindow.isOpen())
	{
		Event event;
		while (mWindow.pollEvent(event))
		{
			if (event.type == Event::Closed) {
				mWindow.close();
			}
		}
		mWindow.clear();
		RectangleShape Tijelo(Vector2f(150.f, 7.f));
		Tijelo.setPosition(150, 270);
		Tijelo.setFillColor(Color::Green);
		Tijelo.rotate(90.f);

		sf::CircleShape sredina(50.f);
		sredina.setFillColor(Color::Yellow);
		sredina.setPosition(-1, 0);

		CircleShape Glava(45.f);
		Glava.setFillColor(Color::Yellow);
		Glava.setPosition(60, 150);
		Glava.setOutlineThickness(40.f);
		Glava.setOutlineColor(Color::White);

		

		ConvexShape Ruka;
		Ruka.setFillColor(Color::Green);
		Ruka.setPosition(150, 250);
		Ruka.setPointCount(4);
		Ruka.setPoint(0, Vector2f(50.f, 55.f));
		Ruka.setPoint(1, Vector2f(65, 25.f));
		Ruka.setPoint(2, Vector2f(35.f, 145.f));
		Ruka.setPoint(3, Vector2f(0.f, 100.f));
		
		mWindow.draw(Ruka);
		mWindow.draw(sredina);
		mWindow.draw(Tijelo);
		mWindow.draw(Glava);
		mWindow.draw(sredina);
		
		mWindow.display();
	
		

	}
}