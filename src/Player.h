#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

#include "./Tickable.h"
#include "./Object.h"

class Player : public Tickable, public Object
{

  private:

    sf::RectangleShape m_shape;
    bool m_isComputer;
    float m_velocityY;

  public:

    Player(bool isComputer);
    bool isComputer();
    float getLeft();
    float getRight();
    float getTop();
    float getBottom();
    float getCenterY();
    float getVelocityY();

    // Tickable
    void tick(void* pGame, int frame, sf::Event& event, sf::RenderWindow& window);
    
    // Object
    std::string toString();

};

#endif