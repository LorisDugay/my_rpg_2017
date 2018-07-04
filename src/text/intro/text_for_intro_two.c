/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** text_for_synopsis_one.c
*/

#include "my.h"
#include "rpg.h"

void intro_six_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 900;
	game->pos.y = 450;
	word = "Gotham, elle avait un protecteur ...";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void intro_seven_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 1200;
	game->pos.y = 525;
	word = "BATMAN !";
	size = 60;
	itext(game, word, size);
	draw_text(game, win);
}
