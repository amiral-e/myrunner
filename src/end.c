/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** end
*/

#include "runner.h"

void restart(runner_t *run)
{
    run->state = game;
    run->player.rect.left = 18;
    run->player.rect.width = 9;
    sfSprite_setTextureRect(run->player.sprite, run->player.rect);
    for (int i = 0; i < run->open.size; i++) {
        sfSprite_setScale(run->obs.spt[i], spos(2.5, 2.5));
        sfSprite_setPosition(run->obs.spt[i], spos(1600 + i * 40, 825));
        run->obs.pos[i] = sfSprite_getPosition(run->obs.spt[i]);
    }
}

void man_end(runner_t *run, int swin)
{
    if (!swin) {
        run->player.rect.left = 27;
        run->player.rect.width = 14;
        run->state = lose;
    } else if (win) {
        run->player.rect.left = 0;
        run->state = win;
    }
    run->menu.score = 0;
    run->player.state = 0;
    run->player.jump = 0;
    run->player.pos = run->player.pos_bak;
    sfSprite_setPosition(run->player.sprite, run->player.pos_bak);
    sfSprite_setTextureRect(run->player.sprite, run->player.rect);
}

void check_coll(runner_t *run, sfSprite *player, sfSprite *obs)
{
    sfFloatRect player_rect = sfSprite_getGlobalBounds(player);
    sfFloatRect obs_rect = sfSprite_getGlobalBounds(obs);
    if (sfFloatRect_intersects(&player_rect, &obs_rect, NULL) == sfTrue)
        man_end(run, 0);
}

void man_win(runner_t *run)
{
    update_par(run, 0);
    sfRenderWindow_drawSprite(run->window, run->player.sprite, NULL);
    for (int i = 1; i <= 3; i++)
        sfRenderWindow_drawSprite(run->window, run->menu.sprite[i], NULL);
    sfRenderWindow_drawText(run->window, run->menu.s_txt, NULL);
}

void man_lose(runner_t *run)
{
    update_par(run, 0);
    sfRenderWindow_drawSprite(run->window, run->player.sprite, NULL);
    for (int i = 1; i < 3; i++)
        sfRenderWindow_drawSprite(run->window, run->menu.sprite[i], NULL);
    sfRenderWindow_drawSprite(run->window, run->menu.sprite[4], NULL);
    sfRenderWindow_drawText(run->window, run->menu.s_txt, NULL);
}