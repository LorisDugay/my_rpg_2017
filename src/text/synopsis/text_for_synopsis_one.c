/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** text_for_synopsis_one.c
*/

#include "my.h"
#include "rpg.h"

void first_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 200;
	word = "Durant la nuit du 12 Octobre 2015, Jonathan Crane";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void second_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 250;
	word = "AKA l'epouventail s'est echappe de l'asile d'arkham";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void third_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 300;
	word = "apres avoir cause un chaos sans precedent, Batman reussit";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void quad_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 350;
	word = "a dejouer tous ses plans, ainsi qu'a le capturer mais ...";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void five_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 400;
	word = "Malheuresement le gaz de Crane reussi a rendre fous certains";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}
