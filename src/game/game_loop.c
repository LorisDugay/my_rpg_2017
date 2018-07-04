/*
** EPITECH PROJECT, 2018
** game_loop
** File description:
** gameloop
*/

#include "rpg.h"

int	manage_pause(window_t *win, menus_t **menus, UNUSED game_t *game)
{
	int	status = 0;

	while (sfRenderWindow_pollEvent(win->window, &win->event)) {
		if (win->event.type == sfEvtClosed) {
			destroy_and_free(win, menus);
			return (1);
		}
	}
	if ((status = mouse_pos(win, menus)) != 0) {
		return (status);
	}
	return (0);
}

int	loop_pause(window_t *win, menus_t **menus, game_t *game)
{
	int	status = 0;

	win->i_menu = 2;
	while (sfRenderWindow_isOpen(win->window)) {
		sfRenderWindow_clear(win->window, sfBlack);
		sfRenderWindow_drawSprite(win->window,
					menus[(win->i_menu)]->s_font, NULL);
		music(win);
		display(win, menus);
		sfRenderWindow_display(win->window);
		sfRenderWindow_setFramerateLimit(win->window, 30);
		if ((status = manage_pause(win, menus, game)) == 1)
			return (1);
		else if (status == 2)
			break;
	}
	return (0);
}

int game_loop(window_t *win, menus_t **menu, char *word, int size)
{
	game_t game = init_game();

	win->game_on = 1;
	while (sfRenderWindow_isOpen(win->window)) {
		if ((loop_anal_events_game(win, menu, &game)) == 1)
			return (1);
		sfRenderWindow_clear(win->window, sfBlack);
		draw_game(game, win);
		sfRenderWindow_setFramerateLimit(win->window, 30);
		sfRenderWindow_display(win->window);
		if (game.charac.pv <= 0)
			return (1);
		else if (game.charac2.pv <= 0) {
			return (transition(&game, word, size, win, menu));
		}
	}
	return (0);
}
