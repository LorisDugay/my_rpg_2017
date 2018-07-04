/*
** EPITECH PROJECT, 2018
** attacks
** File description:
** attacks
*/

#include "rpg.h"

void high_kick(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac.rect.top = 520;
	game.charac.rect.width = 115;
	game.charac.pos.y = 680;
	game.charac.pos = batman_go(win, game, menus);
	while (sfRenderWindow_isOpen(win->window)) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac.sprite, game.charac.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 100000;
		if (time.seconds > 7) {
			if (inc == 0)
				game.charac.rect.left = 110;
			else {
				game.charac.rect.top = 0;
				game.charac.rect.left = 0;
				game.charac.rect.width = 95;
				game.charac.rect.height = 118;
				sfSprite_setTextureRect(game.charac.sprite,
							game.charac.rect);
				hit_marker(win, game, game.charac2);
				game.charac2.pv -= 30;
				return;
			}
			inc++;
			sfClock_restart(time.clock);
		}
	}
	return;
}

void direct_punch(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac.rect.top = 325;
	game.charac.rect.width = 110;
	game.charac.rect.height = 110;
	game.charac.pos = batman_go(win, game, menus);
	game.charac.pos.y = 690;
	while (sfRenderWindow_isOpen(win->window)) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac.sprite, game.charac.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 100000;
		if (time.seconds > 2) {
			if (inc == 0)
				game.charac.rect.left = 110;
			else {
				game.charac.rect.top = 0;
				game.charac.rect.left = 0;
				game.charac.rect.width = 95;
				game.charac.rect.height = 118;
				sfSprite_setTextureRect(game.charac.sprite,
							game.charac.rect);
				hit_marker(win, game, game.charac2);
				game.charac2.pv -= 15;
				return;
			}
			inc++;
			sfClock_restart(time.clock);
		}
	}
	return;
}

void batarang(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac.rect.top = 230;
	game.charac.rect.width = 110;
	game.charac.rect.height = 100;
	game.charac.pos.y = 720;
	while (sfRenderWindow_isOpen(win->window)) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac.sprite, game.charac.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 100000;
		if (time.seconds > 1) {
			if (inc == 0)
				game.charac.rect.left = 94;
			else {
				batarang_in_air(win, game, menus);
				game.charac.rect.top = 0;
				game.charac.rect.left = 0;
				game.charac.rect.width = 95;
				game.charac.rect.height = 118;
				sfSprite_setTextureRect(game.charac.sprite,
							game.charac.rect);
				hit_marker(win, game, game.charac2);
				game.charac2.pv -= 40;
				return;
			}
			inc++;
			sfClock_restart(time.clock);
		}

	}
}
