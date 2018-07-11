//
// Created by Ventajas Javier on 10.07.18.
//

#ifndef SNAKE_PLAYVIEW_H
#define SNAKE_PLAYVIEW_H

#include "GamePresenter.h"


class GameView
{
public:

    GameView();

    void initialize();

    void update(ViewModel vm);

    void dispatchEvent(Event e);

};


#endif //SNAKE_GAMEVIEW_H
