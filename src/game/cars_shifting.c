/*
** EPITECH PROJECT, 2018
** cars_shifting
** File description:
** caracters moves
*/

#include "rpg.h"

sfVector2f batman_go(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac.rect.top = 0;
	game.charac.rect.left = 120;
	game.charac.rect.width = 80;
	game.charac.rect.height = 130;
	while (sfRenderWindow_isOpen(win->window)
	&& game.charac.pos.x < game.charac2.pos.x - 50) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac.sprite, game.charac.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 100000;
		if (time.seconds > 0.7) {
			if (inc > 3) {
				inc = 0;
				game.charac.rect.left = 120;
			}
			else {
				game.charac.rect.left += 80;
				inc++;
			}
			sfSprite_setTextureRect(game.charac.sprite,
						game.charac.rect);
			game.charac.pos.x += 30;
			sfClock_restart(time.clock);
		}
	}
	return (game.charac.pos);
}

sfVector2f arrow_jump(window_t *win, game_t game, menus_t **menus)
{
	timef_t time = init_time();
	int center = game.charac2.pos.x - game.charac.pos.x;

	game.charac2.rect.top = 0;
	game.charac2.rect.left = 580;
	game.charac2.rect.width = 80;
	game.charac2.rect.height = 120;
	while (sfRenderWindow_isOpen(win->window)
	&& game.charac2.pos.x > game.charac.pos.x + 20) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac.sprite, game.charac.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 10000;
		if (time.seconds > 0.000000000001) {
			if (game.charac2.pos.x > center)
				game.charac2.pos.y -= 5;
			else
				game.charac2.pos.y += 5;
			game.charac2.pos.x -= 10;
			sfSprite_setTextureRect(game.charac2.sprite,
						game.charac2.rect);
			sfClock_restart(time.clock);
		}
	}
	return (game.charac2.pos);
}

sfVector2f superman_go(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac2.rect.top = 0;
	game.charac2.rect.left = 770;
	game.charac2.rect.width = 80;
	game.charac2.rect.height = 130;
	while (sfRenderWindow_isOpen(win->window)
	&& game.charac2.pos.x > game.charac.pos.x + 80) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 100000;
		if (time.seconds > 0.5) {
			if (inc > 5) {
				inc = 0;
				game.charac2.rect.left = 770;
			}
			else {
				game.charac2.rect.left -= 120;
				inc++;
			}
			sfSprite_setTextureRect(game.charac2.sprite,
						game.charac2.rect);
			game.charac2.pos.x -= 20;
			sfClock_restart(time.clock);
		}
	}
	return (game.charac2.pos);
}
