/*
** EPITECH PROJECT, 2018
** attacks_annex
** File description:
** secundaries functions for attacks
*/

#include "rpg.h"

void batarang_in_air(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();
	charac_t stock = batman_throwing();

	game.charac.rect.top = 230;
	game.charac.rect.width = 100;
	game.charac.rect.left = 400;
	game.charac.pos.y += 30;
	stock.pos.y += 70;
	while (sfRenderWindow_isOpen(win->window)
	&& game.charac.pos.x < game.charac2.pos.x) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac.sprite,game.charac.rect);
		draw_game(game, win);
		draw_charac(win, stock);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 100000;
		if (time.seconds > 0.000000000000000001) {
			if (inc % 2 == 0) {
				game.charac.rect.left = 400;
			}
			else
				game.charac.rect.left += 70;
			sfSprite_setTextureRect(game.charac.sprite,
						game.charac.rect);
			game.charac.pos.x += 40;
			sfClock_restart(time.clock);
			inc++;
		}
	}
}
