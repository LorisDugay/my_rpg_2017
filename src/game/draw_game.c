/*
** EPITECH PROJECT, 2018
** draw_game
** File description:
** draw elements
*/

#include "rpg.h"

void draw_game(game_t game, window_t *win)
{
	sfSprite_setPosition(game.charac.sprite, game.charac.pos);
	sfSprite_setPosition(game.charac2.sprite, game.charac2.pos);
	sfRenderWindow_drawSprite(win->window, game.back.sprite, NULL);
	sfRenderWindow_drawSprite(win->window, game.charac.sprite, NULL);
	sfRenderWindow_drawSprite(win->window, game.charac2.sprite, NULL);
	pv(&game, "useless", 30, win);
}

void draw_charac(window_t *win, charac_t charac)
{
	sfSprite_setPosition(charac.sprite, charac.pos);
	sfRenderWindow_drawSprite(win->window, charac.sprite, NULL);
}
