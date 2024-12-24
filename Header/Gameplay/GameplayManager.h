#pragma once

#include "Paddle.h"
#include "Ball.h"

namespace Gameplay
{
	class GameplayManager
	{
	private:
		float player1_position_x = 10.0f;
		float player1_position_y = 290.0f;	
		float player2_postion_x = 1250.0f;
		float player2_postion_y = 290.0f;

		Ball* ball;
		Paddle* player1;
		Paddle* player2;

		void initialize();

	public:
		GameplayManager();
		void update();
		void render(RenderWindow* game_window);

	};
}
