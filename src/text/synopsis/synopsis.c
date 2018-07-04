/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** synopsis.c
*/

#include "my.h"
#include "rpg.h"

void synopsis(game_t *game, char *word, int size, window_t *win)
{
	first_paragraph(game, word, size, win);
	second_paragraph(game, word, size, win);
	third_paragraph(game, word, size, win);
	quad_paragraph(game, word, size, win);
	five_paragraph(game, word, size, win);
	six_paragraph(game, word, size, win);
	seven_paragraph(game, word, size, win);
	eight_paragraph(game, word, size, win);
	nine_paragraph(game, word, size, win);
}
