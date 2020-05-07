//
// Created by cristian on 7/05/20.
//
#include "../header/basic_header.h"

/**
 *
 */
SDL_Surface *_load_img(char *path)
{
    SDL_Surface *l_img = NULL;

    l_img = SDL_LoadBMP(path);
    if (l_img == NULL)
    {
        printf( "Unable to load image %s! SDL Error: %s\n", path, SDL_GetError() );
        return (NULL);
    }
    return (l_img);
}