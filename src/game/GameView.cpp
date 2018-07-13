//
// Created by Ventajas Javier on 10.07.18.
//

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <cstdio>
#include <stdio.h>

#include "GamePresenter.h"
#include "GameView.h"

using namespace glm;


GLFWwindow* window;

GameView::GameView(Presenter presenter) : presenter(presenter)
{
    if (!glfwInit())
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        return;
    }

    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(1024, 768, "Snake", nullptr, nullptr);

    if (window == nullptr)
    {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(window);

    if (glewInit() != GLEW_OK)
    {
        fprintf(stderr, "Failed to initialize GLEW\n");
        getchar();
        glfwTerminate();
        return;
    }

    glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);
    glClearColor(0.2f, 0.2f, 0.2f, 0.f);


}

void GameView::initialize()
{

    do{
        glClear( GL_COLOR_BUFFER_BIT );
        glfwSwapBuffers(window);
        glfwPollEvents();

    }
    while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
           glfwWindowShouldClose(window) == 0 );

    glfwTerminate();
}

void GameView::update(ViewModel vm)
{

}

void GameView::dispatchEvent(Event e)
{
    presenter.handleEvent(e);
}




