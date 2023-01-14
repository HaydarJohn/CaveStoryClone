#include"input.h"


// This function called at the begining of each new frame
// to reset the keys that no longer relevant

void Input::beginNewFreame()
{
    this->m_pressedKeys.clear();
    this->m_relaesedKeys.clear();

}

// This get called when key pressed

void Input::keyDownEvent(const SDL_Event& event)
{
    this->m_pressedKeys[event.key.keysym.scancode] = true;    
    this->m_heldKeys[event.key.keysym.scancode] = true;
}


void Input::keyUpEvent(const SDL_Event& event)
{
    this->m_relaesedKeys[event.key.keysym.scancode] = true;
    this->m_heldKeys[event.key.keysym.scancode] = false;

}

// Check if certain key is pressed during the frame

bool Input::wasKeyPressed(SDL_Scancode key)
{
    return this->m_pressedKeys[key];
}


// Check if certain key is released during the frame

bool Input::wasKeyReleased(SDL_Scancode key)
{
    return this->m_relaesedKeys[key];
}


// Check if certain key is held

bool Input::isKeyHeld(SDL_Scancode key)
{
    return this->m_heldKeys[key];
}