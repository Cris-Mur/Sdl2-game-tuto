//
// Created by cristian on 7/05/20.
//

#ifndef SDL2_GAME_TUTO_BASIC_HEADER_H
#define SDL2_GAME_TUTO_BASIC_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL.h>

int _Sdl_born(const int S_w, const int S_H, SDL_Window **window, SDL_Surface **S_surface);
SDL_Surface * _load_img(char *path);
void _close_win(SDL_Window **window, SDL_Surface **img);

#endif //SDL2_GAME_TUTO_BASIC_HEADER_H
