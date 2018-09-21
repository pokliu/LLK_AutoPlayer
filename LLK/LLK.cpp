// LLK.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "Game.h"
#include "AI.h"

int main()
{
	int arr[70] = { 2, 1, 0, 3, 5, 4, 6, 2, 0, 1, 3, 4, 5, 6, 5, 4, 0, 1, 2, 3, 6, 3, 0, 3, 6, 3, 5, 0, 6, 6, 6, 3, 0, 6, 4, 0, 4, 2, 1, 3, 5, 6, 0, 6, 3, 3, 5, 3, 0, 6, 3, 6, 0, 6, 4, 6, 4, 5, 3, 0, 4, 2, 1, 5, 0, 3, 4, 2, 4, 1 };
	vector<int> v(arr, arr + 70);
	Game* game = new Game(7, 10);
	game->init(v);

	game->printMatrix();

	AI* ai = new AI(game);
	vector<Point> steps = ai->play();

	for (vector<Point>::iterator it = steps.begin(); it != steps.end(); it++)
	{
		cout << "Point Click.(" << it->x << ", " << it->y << ')' << endl;
	}
}
