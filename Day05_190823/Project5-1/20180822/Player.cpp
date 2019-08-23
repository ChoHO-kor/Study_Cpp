#include "Player.h"

int PlayerX = 0;
int PlayerY = 0;
int OldPlayerX = 0;
int OldPlayerY = 0;

void InitPlayer()
{
	PlayerX = 1;
	PlayerY = 1;
	
}

void MovePlayer()
{
	OldPlayerX = PlayerX;
	OldPlayerY = PlayerY;

	if (KeyCode == UP)
	{
		PlayerY--;
	}
	else if (KeyCode == Down)
	{
		PlayerY++;
	}
	else if (KeyCode == Left)
	{
		PlayerX--;
	}
	else if (KeyCode == Right)
	{
		PlayerX++;
	}

	if (map[PlayerY][PlayerX] == 0 || map[PlayerY][PlayerX] == 4)
	{
		//�̵�
		map[OldPlayerY][OldPlayerX] = 0;
		map[PlayerY][PlayerX] = 3;
		OldPlayerX = PlayerX;
		OldPlayerY = PlayerY;
	}
	else
	{
		PlayerX = OldPlayerX;
		PlayerY = OldPlayerY;
	}
}
