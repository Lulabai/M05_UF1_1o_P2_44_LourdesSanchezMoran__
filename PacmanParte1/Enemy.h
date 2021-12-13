#pragma once
#include "ConsoleUtils.h"
#include "Map.h"
#include "TimeManager.h"

#include <stdlib.h>
#include <time.h>

class Enemy
{
private:
	COORD spawn; //darle posición x,y
	COORD position;
	COORD direction;
	char character = 'A';
	float powerup_countdown = 0;
	ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::CONSOLE_COLOR::DARK_RED; //color del char
	ConsoleUtils::CONSOLE_COLOR background = ConsoleUtils::CONSOLE_COLOR::BLACK; //color fondo del char
	void RandomDirection();

public:
	enum ENEMY_STATE { ENEMY_NONE, ENEMY_KILLED, ENEMY_DEAD };
	Enemy();
	Enemy(COORD _spawn);
	void Draw();
	void PowerUpPicked();
	ENEMY_STATE Update(Map* _map, COORD _player);
};

