/*
** EPITECH PROJECT, 2018
** attacks_arrow_annec
** File description:
** secundaries functions for attacks
*/

#include "rpg.h"

void arrow_in_air(window_t *win, game_t game, menus_t **menus)
{
	timef_t time = init_time();
	charac_t stock = init_arrow_shooting();

	game.charac2.rect.top = 330;
	game.charac2.rect.width = 100;
	game.charac2.rect.left = 400;
	stock.pos.y += 25;
	while (sfRenderWindow_isOpen(win->window)
	&& game.charac2.pos.x > game.charac.pos.x) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac2.sprite,game.charac2.rect);
		draw_game(game, win);
		draw_charac(win, stock);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 10000;
		if (time.seconds > 0.1) {
			game.charac2.pos.x -= 15;
			sfClock_restart(time.clock);
			sfSprite_setTextureRect(game.charac2.sprite,
						game.charac2.rect);
		}
	}
}
