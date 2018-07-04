/*
** EPITECH PROJECT, 2018
** anal events
** File description:
** manages events in the game loop
*/

#include "rpg.h"

int anal_events_game(window_t *win, menus_t **menus, game_t *game)
{
	if (win->event.type == sfEvtClosed) {
		sfText_destroy(game->text);
		destroy_and_free(win, menus);
		sfRenderWindow_close(win->window);
		return (1);
	} else if (win->event.type == sfEvtKeyPressed) {
		if (win->event.key.code == sfKeyZ) {
			high_kick(win, *game, menus);
			game->charac2.pv -= 30;
			if (game->charac.pv > 0 && game->charac2.pv > 0)
				ia_turn_superman(win, game, menus);
		}
		else if (win->event.key.code == sfKeyA) {
			direct_punch(win, *game, menus);
			game->charac2.pv -= 15;
			if (game->charac.pv > 0 && game->charac2.pv > 0)
				ia_turn_superman(win, game, menus);
		}
		else if (win->event.key.code == sfKeyEscape)
			if ((loop_pause(win, menus, game)) == 1)
				return (1);
	}
	return (0);
}

int anal_events_game2(window_t *win, menus_t **menus, game_t *game)
{
	if (win->event.type == sfEvtClosed) {
		destroy_and_free(win, menus);
		sfRenderWindow_close(win->window);
		return (1);
	} else if (win->event.type == sfEvtKeyPressed) {
		if (win->event.key.code == sfKeyZ) {
			high_kick(win, *game, menus);
			game->charac2.pv -= 30;
			if (game->charac.pv > 0 && game->charac2.pv > 0)
				ia_turn_arrow(win, game, menus);
		}
		else if (win->event.key.code == sfKeyA) {
			direct_punch(win, *game, menus);
			game->charac2.pv -= 15;
			if (game->charac.pv > 0 && game->charac2.pv > 0)
				ia_turn_arrow(win, game, menus);
		}
		else if (win->event.key.code == sfKeyE) {
			batarang(win, *game, menus);
			game->charac2.pv -= 40;
			if (game->charac.pv > 0 && game->charac2.pv > 0)
				ia_turn_arrow(win, game, menus);
		}
		else if (win->event.key.code == sfKeyEscape)
			if ((loop_pause(win, menus, game)) == 1)
				return (1);
	}
	return (0);
}

int anal_events_attack(window_t *win, game_t game, menus_t **menus)
{
	if (win->event.type == sfEvtClosed) {
		destroy_and_free(win, menus);
		sfRenderWindow_close(win->window);
		return (1);
	}
	else if (win->event.key.code == sfKeyEscape)
			if ((loop_pause(win, menus, &game)) == 1)
				return (1);
	return (0);
}

int loop_anal_events_game(window_t *win, menus_t **menus, game_t *game)
{
	while (sfRenderWindow_pollEvent(win->window, &win->event)) {
		if ((anal_events_game(win, menus, game)) == 1)
			return (1);
	}
	return (0);
}

int loop_anal_events_game2(window_t *win, menus_t **menus, game_t *game)
{
	while (sfRenderWindow_pollEvent(win->window, &win->event)) {
		if ((anal_events_game2(win, menus, game)) == 1)
			return (0);
	}
	return (0);
}
