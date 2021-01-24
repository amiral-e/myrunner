/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** key
*/

#include "runner.h"

void man_space(runner_t *run)
{
    if (run->state == menu)
        run->state = game;
    else if (run->state == game)
        run->player.jump++;
    else
        restart(run);
}

void man_pressed(runner_t *run)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace))
        man_space(run);
    else if (sfKeyboard_isKeyPressed(sfKeyEscape) &&
        (run->state == menu || run->state == win || run->state == lose))
        free_all(run);
}