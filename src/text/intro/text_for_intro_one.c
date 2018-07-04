/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** text_for_synopsis_one.c
*/

#include "my.h"
#include "rpg.h"

void intro_first_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 900;
	game->pos.y = 200;
	word = "C'etait une nuit comme les autres a gotham, des criminels";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void intro_second_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 900;
	game->pos.y = 250;
	word = "partout, oppressant la population, la police debordee";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void intro_third_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 900;
	game->pos.y = 300;
	word = "asseyant tant bien que mal a proteger la population ...";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void intro_quad_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 900;
	game->pos.y = 350;
	word = "Mais le pire c'est que meme les criminels et les mafias";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void intro_five_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 900;
	game->pos.y = 400;
	word = "ne sont rien face aux super criminels, heureusement pour";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}
