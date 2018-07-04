/*
** EPITECH PROJECT, 2018
** scenes
** File description:
** scenes managment
*/

#include "rpg.h"

int scene2(window_t *win, menus_t **menu)
{
	game_t game = init_game2();

	while (sfRenderWindow_isOpen(win->window)) {
		if (loop_anal_events_game2(win, menu, &game) == 1)
			return (1);
		sfRenderWindow_clear(win->window, sfBlack);
		draw_game(game, win);
		sfRenderWindow_setFramerateLimit(win->window, 30);
		sfRenderWindow_display(win->window);
		if (game.charac.pv <= 0 || game.charac2.pv <= 0)
			return (1);
	}
	return (1);
}
