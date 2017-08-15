#include <iostream>
#include <string>

#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <glm/glm.hpp>

const int width = 800;
const int height = 600;
const std::string title = "Flucky Game";

int main()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    SDL_Window *window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);
    SDL_GLContext glContext = SDL_GL_CreateContext(window);

    GLenum status = glewInit();
    if(status != GLEW_OK)
    {
        std::cerr << "Glew has some sort of problem!" << std::endl;
        return 1;
    }

    while(true)
    {
        glClearColor(.5f, .5f, 1.f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        SDL_GL_SwapWindow(window);

        SDL_Event e;
        if(SDL_PollEvent(&e))
        {
            if(e.type == SDL_QUIT)
                break;
        }
    }

    SDL_GL_DeleteContext(glContext);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
