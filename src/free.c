/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** free
*/

#include <stdlib.h>
#include "runner.h"

void free_txtspt(sfSprite **sprite, sfTexture **texture)
{
    if (*sprite)
        sfSprite_destroy(*sprite);
    if (*texture)
        sfTexture_destroy(*texture);
}

void free_less(runner_t *run)
{
    for (int i = 0; i < 4; i++)
        free_txtspt(&run->par.diap[i], &run->par.text[i]);
    for (int i = 0; i < 5; i++)
        free_txtspt(&run->menu.sprite[i], &run->menu.text[i]);
    sfSprite_destroy(run->player.sprite);
    sfText_destroy(run->menu.s_txt);
    sfFont_destroy(run->menu.font);
    sfMusic_destroy(run->music);
    sfSound_destroy(run->sound);
    free(run->obs.buff);
    free(run->obs.pos);
    free(run->obs.arr);
    free(run->obs.spt);
}

void free_all(runner_t *run)
{
    run->free = 1;
    sfRenderWindow_clear(run->window, sfBlack);
    sfRenderWindow_close(run->window);
    free_less(run);
}