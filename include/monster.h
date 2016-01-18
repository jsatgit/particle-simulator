#ifndef MONSTER_H
#define MONSTER_H

#include <SFML/System/Vector2.hpp>
#include "turnCounter.h"
#include "particle.h"

class Monster : public Particle
{
private:
    TurnCounter m_moveCounter;
    TurnCounter m_healthCounter;
    int m_healthRate;
    int m_health;
    int m_speed;
    int m_gold;

    bool m_hasCollision;
    sf::Vector2f m_goal;

    void onBeginCollisionWith(Particle& particle) override;
    void onEndCollisionWith(Particle& particle) override;

    void loseHealth();

public:
    Monster(int size);

    void setSpeed(int speed);
    void setGold(int gold);
    void giveGold(int gold);
    void setHealthRate(int rate);

    int askGold() const;
    bool isAlive() const override;

    void move() override;
    void render() override;
    bool collidesWith(const Particle& particle) override;
    void addCollider(Monster& monster);
    void removeCollider(Monster& monster);
    void tick() override;
};

#endif /* MONSTER_H */
