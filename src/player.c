/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** player
*/

#include "runner.h"

void jump_player(runner_t *run)
{
    if (run->player.state == 0) {
        sfSound_play(run->sound);
        run->player.pos.y -= 50;
        run->player.state = 1;
    }
    if (run->player.state == 4) {
        run->player.pos.y += 50;
        run->player.state = 0;
        run->player.jump--;
    } else
        run->player.state++;
    sfSprite_setPosition(run->player.sprite, run->player.pos);
}

void moove_player(runner_t *run)
{
    if (run->player.rect.left >= 18 || run->player.rect.left <= 0) {
        run->player.sign *= -1;
        run->player.rect.left = 9;
    } else
        run->player.rect.left += run->player.sign * 9;
    sfClock_restart(run->player.clock);
}

void man_player(runner_t *run)
{
    if (run->state == win || run->state == lose)
        return;
    run->menu.score++;
    sfText_setString(run->menu.s_txt, my_itoa(run->menu.score));
    if (run->player.jump > 0)
        jump_player(run);
    moove_player(run);
    sfSprite_setTextureRect(run->player.sprite, run->player.rect);
}