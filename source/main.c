#include "../header/basic_header.h"

int main() {
    //Screen dimension constants
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;
    //The window we'll be rendering to
    SDL_Window *window = NULL;
    //The surface contained by the window
    SDL_Surface *screen = NULL;
    //The image that will be load
    SDL_Surface *img = NULL;
    //Main loop flag
    int quit = 0;
    //Event handler
    SDL_Event e;

    //Start SDL
    if (!_Sdl_born(SCREEN_WIDTH, SCREEN_HEIGHT, &window, &screen))
    {
        printf("Failed to initialize!\n");
    }
    else
    {
        //Load image
        img = _load_img("../source/re_src/mew_up.bmp");
        if (!img)
        {
            printf("Failed to load image!\n");
        }
        while(!quit)
        {
            //Handle events on queue
            while( SDL_PollEvent( &e ) != 0 )
            {
                //User requests quit
                if( e.type == SDL_QUIT )
                {
                    quit = 1;
                }
            }
            //Apply image
            SDL_BlitSurface( img, NULL, screen, NULL );
            //Update the surface
            SDL_UpdateWindowSurface( window );
        }
    }
    //Free resources and close SDL
    _close_win(&window, &img);
    write(STDOUT_FILENO, "Bye...\n",7);
    return 0;
}
