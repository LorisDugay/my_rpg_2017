/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** text_for_synopsis_one.c
*/

#include "my.h"
#include "rpg.h"

void six_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 450;
	word = "Allies de Batman ... Green Arrow, Red Hood et meme";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void seven_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 500;
	word = "Le Boy scout en Bleu Superman sont tombes, et Batman";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void eight_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 550;
	word = "s'est jure de les ramener a la raison, quelque en sois";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void nine_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 600;
	word = "le prix !";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}
