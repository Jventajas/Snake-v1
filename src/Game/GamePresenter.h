//
// Created by Ventajas Javier on 10.07.18.
//

#ifndef SNAKE_PLAYVIEWPRESENTER_H
#define SNAKE_PLAYVIEWPRESENTER_H


class Presenter {

public:
    Presenter();

    void present(ViewModel vm);

    void handleEvent(Event event);

};

struct ViewModel
{

};

struct Event
{

};


#endif //SNAKE_PLAYVIEWPRESENTER_H
