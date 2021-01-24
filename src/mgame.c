/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** man
*/

#include "runner.h"

void man_obs(runner_t *run, int i)
{
    run->obs.pos[i].x -= 0.10 + (3 * 1.5);
    sfSprite_setPosition(run->obs.spt[i], run->obs.pos[i]);
    if (run->obs.arr[i] != 0)
        check_coll(run, run->player.sprite, run->obs.spt[i]);
    sfRenderWindow_drawSprite(run->window, run->obs.spt[i], NULL);
}

void man_game(runner_t *run)
{
    if (sfSprite_getPosition(run->obs.spt[run->open.size - 1]).x <= -40)
        man_end(run, 1);
    if (sfClock_getElapsedTime(run->player.clock).microseconds / 10000 >= 15)
        man_player(run);
    sfRenderWindow_drawSprite(run->window, run->player.sprite, NULL);
    for (int i = 0; i < run->open.size; i++)
        man_obs(run, i);
    sfRenderWindow_drawText(run->window, run->menu.s_txt, NULL);
}

void man_menu(runner_t *run)
{
    for (int i = 0; i < 3; i++)
        sfRenderWindow_drawSprite(run->window, run->menu.sprite[i], NULL);
}

void update_par(runner_t *run, int state)
{
    int y;

    for (int i = 0; i < 4; i += 1) {
        if (state) {
            scx(run, i);
            y = ((i != 0) ? 100 : 0);
            sfSprite_setPosition(run->par.diap[i], spos(run->par.x[i], y));
        }
        sfRenderWindow_drawSprite(run->window, run->par.diap[i], NULL);
    }
}

void man_par(runner_t *run)
{
    if (run->free)
        return;
    if (sfClock_getElapsedTime(run->par.clock).microseconds / 10000 >= 1) {
        sfRenderWindow_clear(run->window, sfBlack);
        if (run->state == menu || run->state == game) {
            update_par(run, 1);
            (run->state == menu) ? man_menu(run) : man_game(run);
        } else
            (run->state == win) ? man_win(run) : man_lose(run);
        sfRenderWindow_display(run->window);
        sfClock_restart(run->par.clock);
    }
}