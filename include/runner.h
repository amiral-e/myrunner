/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** runner
*/

#ifndef RUNNER_H
#define RUNNER_H

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdio.h>
#include "../lib/include/m_files.h"
#include "../lib/include/m_macro.h"

typedef struct par_s
{
    sfTexture *text[4];
    sfSprite *diap[4];
    sfIntRect rect;
    sfClock *clock;
    float x[4];
} par_t;

typedef struct menu_s
{
    sfTexture *text[5];
    sfSprite *sprite[5];
    sfText *s_txt;
    sfFont *font;
    int score;
} menu_t;

typedef struct player_s
{
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f pos_bak;
    sfClock *clock;
    int state;
    int sign;
    int jump;
} player_t;

typedef struct open_s
{
    FILE *fp;
    int size;
} open_t;

typedef struct obs_s
{
    sfSprite **spt;
    sfVector2f *pos;
    char *buff;
    int *arr;
} obs_t;

typedef struct runner_s
{
    sfRenderWindow *window;
    sfVector2f win_size;
    sfEvent event;
    open_t open;
    obs_t obs;
    player_t player;
    menu_t menu;
    par_t par;
    enum {menu, game, win, lose} state;
    int free;
    sfMusic *music;
    sfSound *sound;
    sfSoundBuffer *soundb;
} runner_t;

int man_read(runner_t *run, char *str);

void init_runner(runner_t *run);

void update_par(runner_t *run, int state);

void check_coll(runner_t *run, sfSprite *player, sfSprite *obs);
void man_pressed(runner_t *run);
void man_end(runner_t *run, int swin);
void man_win(runner_t *run);
void man_lose(runner_t *run);
void restart(runner_t *run);

void man_par(runner_t *run);
void man_player(runner_t *run);

void free_less(runner_t *run);
void free_all(runner_t *run);

void scx(runner_t *run, int i);
void stext(sfSprite **sprite, char *str);
void spar(runner_t *run, char *str, int i);
void srect(sfIntRect *rect, float width, float height);
sfVector2f spos(float x, float y);

#endif
