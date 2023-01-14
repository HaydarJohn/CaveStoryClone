#ifndef INPUT_H
#define INPUT_H
#include<SDL2/SDL.h>
#include<map>

class Input
{
private:
    std::map<SDL_Scancode,bool> m_heldKeys;
    std::map<SDL_Scancode,bool> m_pressedKeys;
    std::map<SDL_Scancode,bool> m_relaesedKeys;

public:

    void beginNewFreame();
    void keyUpEvent(const SDL_Event& event);
    void keyDownEvent(const SDL_Event& event);

    bool wasKeyPressed(SDL_Scancode key);
    bool wasKeyReleased(SDL_Scancode key);
    bool isKeyHeld(SDL_Scancode key);


};

#endif