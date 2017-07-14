// Sample Tank entity code
//

#include "ui\WinCanvas.h"
#include "Tank.h"

Tank::Tank()
{
	position = POINT2(0, 0);
	velocity = POINT2(0, 0.01);
}


Tank::~Tank()
{
}

void Tank::render(WinCanvas & wc)
{
	wc.DrawPoly(Triangle(position + POINT2(0, 0), position + POINT2(60, 30), 
		position + POINT2(30, 60)), LRGB(255, 255, 0));

}

void Tank::handleInput(InputState & is)
{
	if (is.isActive('D'))
	{
		velocity = velocity + POINT2(0.01, 0);
	}
}

void Tank::update()
{
	position = position + velocity; // * timestep;
}
