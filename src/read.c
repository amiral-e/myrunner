/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** read
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "runner.h"

int check_read(char *str)
{
    if (my_strlen(str) <= 1)
        return (1);
    for (int i = 0; i < my_strlen(str) - 1; i++)
        if ((str[i] < '0' || str[i] > '3') && str[my_strlen(str)] != '\n')
            return (1);
    return (0);
}

int man_read(runner_t *run, char *str)
{
    size_t size = 0;
    char *files[4] = {"rss/obs/0.png", "rss/obs/1.png", "rss/obs/2.png",
        "rss/obs/3.png"};

    run->open.fp = fopen(str, "r");
    if (!run->open.fp)
        return (1);
    run->obs.buff = malloc(sizeof(char) * 500);
    getline(&run->obs.buff, &size, run->open.fp);
    if (check_read(run->obs.buff))
        return (1);
    run->open.size = my_strlen(run->obs.buff) - 1;
    run->obs.arr = malloc(sizeof(int) * run->open.size);
    run->obs.spt = malloc(sizeof(sfSprite *) * run->open.size);
    for (int i = 0; i < run->open.size; i++) {
        run->obs.arr[i] = CTOI(run->obs.buff[i]);
        stext(&run->obs.spt[i], files[run->obs.arr[i]]);
    }
    return (0);
}