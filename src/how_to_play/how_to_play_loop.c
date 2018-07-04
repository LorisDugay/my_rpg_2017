/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** how_to_play_loop.c
*/

#include "my.h"
#include "rpg.h"

int des_loop(window_t *win, menus_t **menus)
{
	while (sfRenderWindow_pollEvent(win->window, &win->event)) {
		if (win->event.type == sfEvtClosed) {
			destroy_and_free(win, menus);
			sfRenderWindow_close(win->window);
			return (1);
		} else if ((win->event.type == sfEvtMouseButtonPressed)) {
			return (2);
		}
	}
	return (0);
}

int how_loop(window_t *win, menus_t **menus, char *word, int size)
{
	game_t game;
	int	status = 0;

	sfRenderWindow_clear(win->window, sfBlack);
	while (sfRenderWindow_isOpen(win->window)) {
		play_font(&game, win);
		how_to_text(&game, word, size, win);
		sfRenderWindow_display(win->window);
		sfRenderWindow_setFramerateLimit(win->window, 30);
		if ((status = des_loop(win, menus)) == 1)
			return (1);
		else if (status == 2)
			break;
	}
	return (0);
}
