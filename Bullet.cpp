#include "Bullet.hpp"    

    Bullet::Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov)
    {
        bullet_src = {616, 201, 302, 96};
    }

    void Bullet::draw()
    {
        Unit::draw(bullet_src, bullet_mover);
        // mover.x+=2;
    }