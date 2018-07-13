//
// Created by Ventajas Javier on 10.07.18.
//

#include <external/AntTweakBar-1.16/src/MiniGLUT.h>
#include "Game/GameView.h"


auto game = Game();
auto presenter = Presenter(game);
auto view = GameView(presenter);




int main()
{
    view.initialize();

    return 0;
}

