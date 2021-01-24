/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** tools
*/

#include "runner.h"

void scx(runner_t *run, int i)
{
    float nx = 0.10 + (i * 1.5);

    if (run->par.x[i] <= -run->win_size.x)
        run->par.x[i] = -nx;
    else
        run->par.x[i] -= nx;
}

void stext(sfSprite **sprite, char *str)
{
    sfTexture *text = sfTexture_createFromFile(str, NULL);

    *sprite = sfSprite_create();
    sfSprite_setTexture(*sprite, text, sfTrue);
}

void srect(sfIntRect *rect, float width, float height)
{
    rect->left = 0;
    rect->top = 0;
    rect->width = width;
    rect->height = height;
}

void spar(runner_t *run, char *str, int i)
{
    float sc;

    run->par.text[i] = sfTexture_createFromFile(str, NULL);
    sfTexture_setRepeated(run->par.text[i], sfTrue);
    run->par.diap[i] = sfSprite_create();
    sfSprite_setTexture(run->par.diap[i], run->par.text[i], sfTrue);
    sc = run->win_size.x / sfTexture_getSize(run->par.text[i]).x;
    sfSprite_setScale(run->par.diap[i], spos(sc, sc));
    sfSprite_setTextureRect(run->par.diap[i], run->par.rect);
}

sfVector2f spos(float x, float y)
{
    sfVector2f vector = {x, y};

    return (vector);
}