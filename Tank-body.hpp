#include "Unit.hpp"

class Body: public Unit
{
    SDL_Rect body_src, body_mover;
    public:
    Body(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
};
