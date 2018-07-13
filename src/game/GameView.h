//
// Created by Ventajas Javier on 10.07.18.
//

#ifndef SNAKE_PLAYVIEW_H
#define SNAKE_PLAYVIEW_H

#include "GamePresenter.h"


class GameView
{
    Presenter presenter;

public:

    explicit GameView(Presenter presenter);

    void initialize();

    void update(ViewModel vm);

    void dispatchEvent(Event e);

};


#endif //SNAKE_GAMEVIEW_H
