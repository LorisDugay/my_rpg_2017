/*
** EPITECH PROJECT, 2018
** ia_turn
** File description:
** ia managment
*/

#include <stdlib.h>
#include "rpg.h"

void ia_turn_superman(window_t *win, game_t *game, menus_t **menus)
{
	if (random() % 2 == 0) {
		punch(win, *game, menus);
		hit_marker(win, *game, game->charac);
		game->charac.pv -= 20;
	}
	else {
		flatten(win, *game, menus);
		hit_marker(win, *game, game->charac);
		game->charac.pv -= 30;
	}
}

void ia_turn_arrow(window_t *win, game_t *game, menus_t **menus)
{
	int rand = random() % 3;

	if (rand <= 1) {
		arrow_arrow(win, *game, menus);
		hit_marker(win, *game, game->charac);
		game->charac.pv -= 35;
	}
	else if (rand == 2) {
		punch_arrow(win, *game, menus);
		hit_marker(win, *game, game->charac);
		game->charac.pv -= 15;
	}
	else {
		kick_arrow(win, *game, menus);
		hit_marker(win, *game, game->charac);
		game->charac.pv -= 25;
	}
}
