#pragma once
#include "ConsoleUtils.h"
#include "Map.h"

#include <stdlib.h>
#include <time.h>

class Enemy
{
private:
	COORD position; //darle posición x,y
	COORD direction;
	char character = 'A';
	ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::CONSOLE_COLOR::DARK_RED; //color del char
	ConsoleUtils::CONSOLE_COLOR background = ConsoleUtils::CONSOLE_COLOR::BLACK; //color fondo del char
	void RandomDirection();

public:
	Enemy();
	Enemy(COORD _spawn);
	void Draw();
	void Update(Map* _map);
};

