#ifndef GRAPHICS_H
#define GRAPHICS_H

struct SDL_Window;
struct SDL_Renderer;



class Graphics
{
private:
    SDL_Window* m_window;
    SDL_Renderer* m_renderer;


public:
    Graphics();
    ~Graphics();
};


#endif