/*
** EPITECH PROJECT, 2018
** attacks_superman
** File description:
** attacks superman
*/

#include "rpg.h"

void punch(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac2.rect.top = 125;
	game.charac2.rect.left = 770;
	game.charac2.pos = superman_go(win, game, menus);
	game.charac2.pos.y = 665;
	game.charac2.rect.width = 110;
	while (sfRenderWindow_isOpen(win->window) && inc < 6) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 100000;
		if (time.seconds > 0.0000001) {
			game.charac2.rect.left -= 131;
			sfClock_restart(time.clock);
			inc++;
		}
	}
	game.charac2.rect.top = 0;
	game.charac2.rect.left = 240;
	sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
	game.charac.pv -= 15;
	return;
}

void flatten(window_t *win, game_t game, menus_t **menus)
{
	size_t inc = 0;
	timef_t time = init_time();

	game.charac2.rect.top = 246;
	game.charac2.rect.left = 770;
	game.charac2.pos = superman_go(win, game, menus);
	game.charac2.pos.y = 600;
	game.charac2.pos.x -= 40;
	while (sfRenderWindow_isOpen(win->window) && inc < 3) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			anal_events_attack(win, game, menus);
		}
		sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
		draw_game(game, win);
		sfRenderWindow_display(win->window);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 100000;
		if (time.seconds > 2) {
			game.charac2.rect.left -= 131;
			sfClock_restart(time.clock);
			game.charac2.pos.y += 30;
			inc++;
		}
	}
	game.charac2.rect.top = 0;
	game.charac2.rect.left = 240;
	sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
	game.charac.pv -= 30;
	return;
}
