#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
class Cvijet {
private:
	RenderWindow &mWindow;
public:
	void draw() ;
	Cvijet(RenderWindow *window);
};
