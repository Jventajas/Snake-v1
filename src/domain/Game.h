//
// Created by Ventajas Javier on 11.07.18.
//

#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H


class Game
{


public:
    Game();

    void moveLeft();

    void moveRight();

};

class Snake
{
    float x, y, dx, dy;

public:
    Snake();

};

class Apple
{
    float x, y;

public:
    Apple(float x, float y);

};

class PoisonApple
{
    float x, y;

public:
    PoisonApple(float x, float y);

};


#endif //SNAKE_GAME_H
