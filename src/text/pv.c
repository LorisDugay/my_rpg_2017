/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** pv.c
*/

#include "rpg.h"

void pv_one(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 425;
	game->pos.y = 500;
	size = 30;
	word = "PV :";
	itext(game, word, size);
	draw_text(game, win);
}

void pv_two(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 925;
	game->pos.y = 500;
	size = 30;
	word = "PV :";
	itext(game, word, size);
	draw_text(game, win);
}

void pv_batman(game_t *game, UNUSED char *word, int size, window_t *win)
{
	int stock = game->charac.pv;;
	game->pos.x = 500;
	game->pos.y = 500;
	size = 30;
	itext(game, int_to_str(stock), size);
	draw_text(game, win);
}

void pv_adversaire(game_t *game, UNUSED char *word, int size, window_t *win)
{
	int issou = game->charac2.pv;
	game->pos.x = 1000;
	game->pos.y = 500;
	size = 30;
	itext(game, int_to_str(issou), size);
	draw_text(game, win);
}

void pv(game_t *game, char *word, int size, window_t *win)
{
	pv_one(game, word, size, win);
	pv_two(game, word, size, win);
	pv_batman(game, word, size, win);
	pv_adversaire(game, word, size, win);
}
