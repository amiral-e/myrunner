/*
** EPITECH PROJECT, 2020
** Unmenu.sprite[0]d (Workspace)
** File description:
** main
*/

#include "runner.h"

int help(void) {
    my_putstr("Usage:\n\t./my_runner map\n");
    my_putstr("\nKeys:\n\tspace: start game or jump\n");
    my_putstr("\tescape: quit or nothing\n");
    return (0);
}

void runner(runner_t *run)
{
    while (sfRenderWindow_pollEvent(run->window, &run->event)) {
        if (run->event.type == sfEvtClosed)
            free_all(run);
        if (run->event.type == sfEvtKeyPressed)
            man_pressed(run);
    }
    man_par(run);
}

int main(int ac, char **av, char **env)
{
    sfVideoMode mode = {1600, 900, 60};
    runner_t run;

    if (env[0] == NULL || ac != 2 ||
        (my_strcmp(my_strdup(av[1]), "-h") != 0 && !fopen(av[1], "r")))
        return (84);
    if (my_strcmp(my_strdup(av[1]), "-h") == 0)
        return (help());
    run.window = sfRenderWindow_create(mode, "DustRunner",
        sfTitlebar | sfClose, NULL);
    if (!run.window || man_read(&run, av[1]))
        return (84);
    sfRenderWindow_setFramerateLimit(run.window, 60);
    init_runner(&run);
    while (sfRenderWindow_isOpen(run.window))
        if (!run.free)
            runner(&run);
    return (0);
}