#include<SDL2/SDL.h>
#include"game.h"
#include"graphics.h"
#include"input.h"


Game::Game()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    this->gameLoop();
}

Game::~Game()
{

}

void Game::gameLoop()
{
    Graphics graphics;
    SDL_Event event;
    Input input;

    while (true)
    {
        if(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                return;       
            }
            else if(event.type == SDL_KEYUP)
            {
                input.keyUpEvent(event);
            }
            else if(event.type == SDL_KEYDOWN)
            {
                input.keyDownEvent(event);
            }
        }
        if(input.wasKeyPressed(SDL_SCANCODE_ESCAPE) == true)
        {
            return;
        }
    }
    
}

void Game::draw(Graphics &graphics)
{

}

void Game::update(float elapsedTime)
{

}