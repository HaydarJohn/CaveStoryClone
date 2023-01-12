#include<SDL2/SDL.h>

#include"graphics.h"

/* Graphics class implementation
*
*/

Graphics::Graphics()
{
    SDL_CreateWindowAndRenderer(640,480,0,&this->m_window,&this->m_renderer);
    SDL_SetWindowTitle(this->m_window,"HaydarJohn");
}

Graphics::~Graphics()
{
    SDL_DestroyWindow(this->m_window);
}