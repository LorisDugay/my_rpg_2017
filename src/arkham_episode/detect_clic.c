/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** detect_clic.c
*/

#include "rpg.h"

int mouse_detec(window_t *win, UNUSED game_t *game)
{
	if (win->event.type == sfEvtMouseButtonPressed)
			return (1);
	return (0);
}
