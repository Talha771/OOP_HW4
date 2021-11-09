#include "Tank-turret.hpp"

Turret::Turret(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov)
{
    turret_src = {603, 0, 507, 152};
}

void Turret::draw()
{
    Unit::draw(turret_src,turret_mover);
}