/*
** EPITECH PROJECT, 2018
** attacks_arrow
** File description:
** arrow attacks
*/

#include "rpg.h"

void punch_arrow(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac2.rect.top = 113;
	game.charac2.rect.left = 910;
	game.charac2.rect.width += 30;
	game.charac2.pos = arrow_jump(win, game, menus);
	game.charac2.pos.x += 70;
	game.charac2.pos.y += 20;
	while (sfRenderWindow_isOpen(win->window) && inc < 3) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 10000;
		if (time.seconds > 13) {
			game.charac2.rect.left -= 130;
			sfClock_restart(time.clock);
			inc++;
		}
	}
	game.charac2.rect.top = 0;
	game.charac2.rect.left = 950;
	game.charac2.rect.width = 100;
	game.charac2.rect.height = 100;
	game.charac2.pos.x = 1000;
	game.charac2.pos.y = 685;
	sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
	game.charac.pv -= 15;
	return;
}

void kick_arrow(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac2.rect.top = 113;
	game.charac2.rect.left = 130;
	game.charac2.rect.width += 30;
	game.charac2.pos = arrow_jump(win, game, menus);
	game.charac2.pos.x += 40;
	game.charac2.pos.y += 15;
	while (sfRenderWindow_isOpen(win->window) && inc < 2) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 10000;
		if (time.seconds > 16) {
			game.charac2.rect.left -= 130;
			sfClock_restart(time.clock);
			inc++;
		}
	}
	game.charac2.rect.top = 0;
	game.charac2.rect.left = 950;
	game.charac2.rect.width = 100;
	game.charac2.rect.height = 100;
	game.charac2.pos.x = 1000;
	game.charac2.pos.y = 685;
	sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
	game.charac.pv -= 30;
	return;
}

void arrow_arrow(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac2.rect.top = 330;
	game.charac2.rect.left = 910;
	game.charac2.rect.width += 30;
	game.charac2.pos.y += 0;
	while (sfRenderWindow_isOpen(win->window) && inc < 4) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 10000;
		if (time.seconds > 16) {
			game.charac2.rect.left -= 130;
			sfClock_restart(time.clock);
			inc++;
		}
	}
	arrow_in_air(win, game, menus);
	game.charac2.rect.top = 0;
	game.charac2.rect.left = 950;
	game.charac2.rect.width = 100;
	game.charac2.rect.height = 100;
	game.charac2.pos.x = 1000;
	game.charac2.pos.y = 685;
	sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
	game.charac.pv -= 40;
	return;
}
