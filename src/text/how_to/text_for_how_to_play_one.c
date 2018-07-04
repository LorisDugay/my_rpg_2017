/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** text_for_how_to_play.c
*/

#include "rpg.h"
#include "my.h"

void play_first_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 200;
	game->pos.y = 50;
	word = "Ici vous aprendrez a jouer a notre rpg";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void play_two_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 200;
	game->pos.y = 150;
	word = "C'est un tour par tour, vous allez donc jouer strategique";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void play_three_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 200;
	game->pos.y = 350;
	word = "appuyer sur 'A' pour le coup de poing";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void play_for_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 200;
	game->pos.y = 450;
	word = "appuyer sur 'B' pour le coup de pied";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}

void play_five_paragraph(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 200;
	game->pos.y = 550;
	word = "appuyer sur 'E' pour lancer le batarang";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}
