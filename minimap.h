#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h> 
typedef struct{
SDL_Surface *image[125];
SDL_Rect position;
SDL_Surface *bonhomme;
SDL_Rect PositionBonhomme;
int minimap_width;
int minimap_height;
int frames;
}minimap;
typedef struct temps
{
SDL_Surface *screen;
SDL_Rect timepose;
TTF_Font *police;
char timeText[20];
}temps;
void initmap(minimap *m); 
void MAJMinimap (SDL_Rect posJoueur,minimap *m,int redimensionement);
void afficherMinimap(minimap m,SDL_Surface *screen); 
void afficherTemps (int temps,SDL_Surface *screen);
SDL_Color GetPixel(SDL_Surface *pSurface,int x,int y);
int collision_parfaite(SDL_Surface *mask , SDL_Rect posjoueur );
void animateminimap(minimap* m);
#endif
