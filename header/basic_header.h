//
// Created by cristian on 7/05/20.
//

#ifndef SDL2_GAME_TUTO_BASIC_HEADER_H
#define SDL2_GAME_TUTO_BASIC_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

//Screen dimension constants
#define SCREEN_WIDTH 640;
#define SCREEN_HEIGHT 480;

int _Sdl_born(SDL_Window **window, SDL_Surface **S_surface);
SDL_Surface * _load_img(char *path);
void _close_win(SDL_Window **window, SDL_Surface **img);

#endif //SDL2_GAME_TUTO_BASIC_HEADER_H
