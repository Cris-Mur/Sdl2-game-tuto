//
// Created by cristian on 7/05/20.
//
#include "../header/basic_header.h"

/**
 * _Sdl_born - this function initialise SDL
 * @S_w: Size weith of window
 * @S_h: Size height of window
 * @window: input addres window
 * @S_surface: input addres screen
 * Return: Always (1) if success (-1) if failed
 */
int _Sdl_born(const int S_w, const int S_h, SDL_Window **window, SDL_Surface **S_surface)
{
    SDL_Window *win;
    SDL_Surface *terrain;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        //write in a terminal Error message
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
        return (-1);
    }

    //Create window
    win = SDL_CreateWindow( "Raise the terrain", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, S_w, S_h, SDL_WINDOW_SHOWN );
    if( win == NULL )
    {
        printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        //Quit SDL subsystems
        SDL_Quit();
        return (-1);
    }
    *window = win;

    //Get window surface
    terrain = SDL_GetWindowSurface(win);
    if (terrain == NULL)
    {
        printf("Sourface could not be charged!! SDL_Error: %s\n", SDL_GetError());
        //Destroy window
        SDL_DestroyWindow( *window );
        //Quit SDL subsystems
        SDL_Quit();
        return (-1);
    }
    *S_surface = terrain;

    return (1);
}