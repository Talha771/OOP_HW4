#include "Tank-body.hpp"

Body::Body(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov)
{
    body_src = {0, 13, 427, 281};
}

void Body::draw()
{
    Unit::draw(body_src,body_mover);
}
