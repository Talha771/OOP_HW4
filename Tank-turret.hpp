// Inherit from Unit class
#include "Unit.hpp"

class Turret: public Unit
{
    SDL_rect turret_src, turret_mover;
    public:
    Turret(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
};