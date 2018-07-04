/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** text_for_how_to_play.c
*/

#include "rpg.h"
#include "my.h"

void play_seven_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 900;
	game->pos.y = 350;
	word = "Cette attaque inflige 15 dégats";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void play_eight_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 900;
	game->pos.y = 450;
	word = "Cette attaque inflige 30 degats";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void play_nine_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 900;
	game->pos.y = 550;
	word = "Cette attaque inflige 40 degats et se debloque au 2eme niveau";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}
