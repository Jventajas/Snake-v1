//
// Created by Ventajas Javier on 10.07.18.
//

#ifndef SNAKE_PLAYVIEWPRESENTER_H
#define SNAKE_PLAYVIEWPRESENTER_H


#include <domain/Game.h>

struct ViewModel
{
    float snakeX;
    float snakeY;
    float appleX;
    float appleY;
    float poisonAppleX;
    float poisonAppleY;
};

enum Event { KEY_LEFT, KEY_RIGHT, KEY_ESC };

class Presenter {

public:
    explicit Presenter(Game game);

    void present(ViewModel vm);

    void handleEvent(Event event);

};


#endif //SNAKE_PLAYVIEWPRESENTER_H
