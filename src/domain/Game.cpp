//
// Created by Ventajas Javier on 11.07.18.
//

#include <random>
#include "Game.h"


Snake snake;
Apple apple(-1, -1);
PoisonApple poisonApple(-1, -1);

std::default_random_engine generator;
std::uniform_real_distribution<float> dis(0.0, 1.0);

Game::Game()
{
    snake = Snake();
    apple = Apple(dis(generator), dis(generator));
    poisonApple = PoisonApple(dis(generator), dis(generator));
}

void Game::moveRight()
{

}

void Game::moveLeft()
{

}

