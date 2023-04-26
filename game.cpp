#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

using namespace std;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("GTA 5 Clone",
                                          SDL_WINDOWPOS_UNDEFINED,
                                          SDL_WINDOWPOS_UNDEFINED,
                                          SCREEN_WIDTH,
                                          SCREEN_HEIGHT,
                                          SDL_WINDOW_SHOWN);
    if (window == NULL) {
        cerr << "Failed to create window: " << SDL_GetError() << endl;
        return -1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        cerr << "Failed to create renderer: " << SDL_GetError() << endl;
        return -1;
    }

    SDL_Texture* background_texture = IMG_LoadTexture(renderer, "background.png");
    if (background_texture == NULL) {
        cerr << "Failed to load background texture: " << SDL_GetError() << endl;
        return -1;
    }

    SDL_Texture* player_texture = IMG_LoadTexture(renderer, "player.png");
    if (player_texture == NULL) {
        cerr << "Failed to load player texture: " << SDL_GetError() << endl;
        return -1;
    }

    SDL_Rect background_rect = { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };
    SDL_Rect player_rect = { 0, 0, 64, 64 };

    bool quit = false;
    SDL_Event e;
    while (!quit) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, background_texture, NULL, &background_rect);
        SDL_RenderCopy(renderer, player_texture, NULL, &player_rect);
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyTexture(background_texture);
    SDL_DestroyTexture(player_texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

