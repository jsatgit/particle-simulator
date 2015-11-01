#ifndef MONSTER_H
#define MONSTER_H

#include <SFML/System/Vector2.hpp>

class Monster 
{
private:
    sf::Vector2f m_position;

public:
    void setPosition(const sf::Vector2f& position);
    void randomWalk();
    void render();
};

#endif /* MONSTER_H */