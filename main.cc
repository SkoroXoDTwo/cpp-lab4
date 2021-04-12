#include <iostream>
#include <stdexcept>

#include <SDL2/SDL.h>
#include <SDL2/SDL_main.h>

#include "RayCastingWindow.h"

int main(int, char **) {
    SDL_Init(SDL_INIT_EVERYTHING);

    try {
        RayCastingWindow window;
        window.main_loop();
    } catch (const std::exception &e) {
        std::cerr << "Runtime error: " << std::endl << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Runtime unexpected error!" << std::endl;
        return 1;
    }

    return 0;
}
