/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init
*/

#include <stdlib.h>
#include "runner.h"

void init_game(runner_t *run)
{
    stext(&run->player.sprite, "rss/human.png");
    srect(&run->player.rect, 9, 14);
    sfSprite_setScale(run->player.sprite, spos(4, 4));
    sfSprite_setTextureRect(run->player.sprite, run->player.rect);
    sfSprite_setPosition(run->player.sprite, spos(100, 900 / 1.110));
    run->player.state = 0;
    run->player.sign = 1;
    run->player.jump = 0;
    run->player.pos = sfSprite_getPosition(run->player.sprite);
    run->player.pos_bak = run->player.pos;
    run->obs.pos = malloc(sizeof(sfVector2f *) * run->open.size);
    for (int i = 0; i < run->open.size; i++) {
        sfSprite_setScale(run->obs.spt[i], spos(2.5, 2.5));
        sfSprite_setPosition(run->obs.spt[i], spos(1600 + i * 40, 825));
        run->obs.pos[i] = sfSprite_getPosition(run->obs.spt[i]);
    }
}

void init_text(runner_t *run)
{
    run->menu.s_txt = sfText_create();
    run->menu.font = sfFont_createFromFile("rss/AeroFighters.ttf");
    sfText_setPosition(run->menu.s_txt, spos(10, 10));
    sfText_setCharacterSize(run->menu.s_txt, 21);
    sfText_setFont(run->menu.s_txt, run->menu.font);
    sfText_setColor(run->menu.s_txt, sfWhite);
    sfText_setString(run->menu.s_txt, my_itoa(run->menu.score));
}

void init_menu(runner_t *run)
{
    char *files[5] = {"rss/mn/title.png", "rss/mn/start.png",
        "rss/mn/quit.png", "rss/mn/win.png", "rss/mn/lose.png"};

    for (int i = 0; i < 5; i++) {
        run->menu.text[i] = sfTexture_createFromFile(files[i], NULL);
        run->menu.sprite[i] = sfSprite_create();
        sfSprite_setTexture(run->menu.sprite[i], run->menu.text[i], sfTrue);
    }
    init_text(run);
    sfSprite_setScale(run->menu.sprite[0], spos(1.25, 1.25));
    sfSprite_setPosition(run->menu.sprite[0], spos(620, 55));
    sfSprite_setPosition(run->menu.sprite[1], spos(480, 765));
    sfSprite_setPosition(run->menu.sprite[2], spos(480, 805));
    sfSprite_setScale(run->menu.sprite[3], spos(1.25, 1.25));
    sfSprite_setPosition(run->menu.sprite[3], spos(620, 55));
    sfSprite_setScale(run->menu.sprite[4], spos(1.25, 1.25));
    sfSprite_setPosition(run->menu.sprite[4], spos(620, 55));
}

void init_music(runner_t *run)
{
    run->music = sfMusic_createFromFile("rss/music.ogg");
    run->soundb = sfSoundBuffer_createFromFile("rss/jump.ogg");
    run->sound = sfSound_create();
    sfSound_setBuffer(run->sound, run->soundb);
    sfMusic_setVolume(run->music, 20);
    sfMusic_setLoop(run->music, sfTrue);
    sfMusic_play(run->music);
}

void init_runner(runner_t *run)
{
    char *files[4] = {"rss/par/1.png", "rss/par/2.png", "rss/par/3.png",
        "rss/par/4.png"};

    run->win_size.x = (float)sfRenderWindow_getSize(run->window).x;
    run->win_size.y = (float)sfRenderWindow_getSize(run->window).y;
    run->menu.score = 0;
    run->state = menu;
    run->free = 0;
    init_music(run);
    srect(&run->par.rect, run->win_size.x, run->win_size.y);
    for (int i = 0; i < 4; i += 1) {
        run->par.x[i] = 0;
        spar(run, files[i], i);
    }
    init_menu(run);
    init_game(run);
    run->par.clock = sfClock_create();
    run->player.clock = sfClock_create();
}