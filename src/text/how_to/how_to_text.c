/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** how_to_text.c
*/

#include "my.h"
#include "rpg.h"

void how_to_text(game_t *game, char *word, int size, window_t *win)
{
	play_first_paragraph(game, word, size, win);
	play_two_paragraph(game, word, size, win);
	play_three_paragraph(game, word, size, win);
	play_for_paragraph(game, word, size, win);
	play_five_paragraph(game, word, size, win);
	play_seven_paragraph(game, word, size, win);
	play_eight_paragraph(game, word, size, win);
	play_nine_paragraph(game, word, size, win);
}
