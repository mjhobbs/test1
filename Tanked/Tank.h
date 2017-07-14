#pragma once
class Tank
{
private:
	POINT2 position;
	POINT2 velocity;

public:
	Tank();
	~Tank();

	void render(WinCanvas & wc);
	void handleInput(InputState & is);
	void update();
};

