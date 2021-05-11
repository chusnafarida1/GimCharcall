#ifndef DEMO_H
#define DEMO_H


#include <SOIL/SOIL.h>
#include <SDL/SDL_mixer.h>

#include <GLM/glm.hpp>
#include <GLM/gtc/matrix_transform.hpp>
#include <GLM/gtc/type_ptr.hpp>

#include "Game.h"

#define NUM_FRAMES 8
#define FRAME_DUR 80

using namespace glm;

class Demo :
	public Engine::Game
{
public:
	Demo();
	~Demo();
	virtual void Init();
	virtual void Update(float deltaTime);
	virtual void Render();
	float frame_width = 0, frame_height = 0,
		frame_width2 = 0, frame_height2 = 0,
		frame_width3 = 0, frame_height3 = 0,
		frame_width4 = 0, frame_height4 = 0,
		frame_width5 = 0, frame_height5 = 0,
		frame_width6 = 0, frame_height6 = 0,
		frame_width7 = 0, frame_height7 = 0,
		frame_width8 = 0, frame_height8 = 0,
		frame_width9 = 0, frame_height9 = 0,
		framew_WallLeft, frameh_WallLeft,
		framew_WallBottom, frameh_WallBottom,
		framew_WallRight, frameh_WallRight,
		framew_WallTop, frameh_WallTop,
		framew_WallMiddle, frameh_WallMiddle,
		framew_WallMiddle2, frameh_WallMiddle2,
		framew_WallMiddle3, frameh_WallMiddle3,
		framew_WallMiddle4, frameh_WallMiddle4;
private:
	Mix_Chunk* sound = NULL;
	Mix_Music* music = NULL;
	int sfx_channel = -1;
	float frame_dur = 0, oldxpos = 0, oldypos = 0, xpos = 0, ypos = 0, xpos2 = 0, ypos2 = 0, xpos3 = 0, ypos3 = 0, xpos4 = 0, ypos4 = 0, xpos5 = 0, ypos5 = 0, xpos6 = 0, ypos6 = 0,
		xpos7 = 0, ypos7 = 0, xpos8 = 0, ypos8 = 0, xpos9 = 0, ypos9 = 0, gravity = 0, xVelocity = 0, yVelocity = 0, yposGround = 0, xpos_1, ypos_1, xpos_2, ypos_2, xpos_3, ypos_3, xpos_4, ypos_4, xpos_5, ypos_5, xpos_6, ypos_6, xpos_7, ypos_7;
	GLuint VBO, VAO, EBO, texture, program, VBO2, VAO2, EBO2, texture2, program2, VBO3, VAO3, EBO3, texture3, program3, VBO4, VAO4, EBO4, texture4, program4,
		VBO5, VAO5, EBO5, texture5, program5, VBO6, VAO6, EBO6, texture6, program6, VBO7, VAO7, EBO7, texture7, program7, VBO8, VAO8, EBO8, texture8, program8, VBO9, VAO9, EBO9, texture9, program9;
	bool walk_anim = false, onGround = true;
	unsigned int frame_idx = 0, flip = 0;
	void BuildPlayerSprite();
	void BuildDinding1();
	void DrawDinding1();
	void BuildDinding2();
	void DrawDinding2();
	void BuildDinding3();
	void DrawDinding3();
	void BuildDinding4();
	void DrawDinding4();
	void BuildDinding5();
	void DrawDinding5();
	void BuildDinding6();
	void DrawDinding6();
	void BuildDinding7();
	void DrawDinding7();
	void BuildDinding8();
	void DrawDinding8();
	bool IsCollided(float x1, float y1, float width1, float height1, float x2, float y2, float width2, float height2);
	void DrawPlayerSprite();
	void UpdatePlayerSpriteAnim(float deltaTime);
	void ControlPlayerSprite(float deltaTime);
};
#endif

