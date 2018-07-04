/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** arkham_loop.c
*/

#include "rpg.h"

int des_arkham(window_t *win, menus_t **menus)
{
	if (win->event.type == sfEvtClosed) {
		destroy_and_free(win, menus);
		sfRenderWindow_close(win->window);
		return (1);
	}
	else if (win->event.type == sfEvtMouseButtonPressed) {
		return (2);
	}
	return (0);
}

int arkham_loop(window_t *win, menus_t **menus, char *word, int size)
{
	game_t game;

	new_font(&game, win, word, size);
	while (sfRenderWindow_isOpen(win->window)) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			if (des_arkham(win, menus) == 1)
				return (1);
			else if (des_arkham(win, menus) == 2)
				return (2);
		}
	}
	return (0);
}
