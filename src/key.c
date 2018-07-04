/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** key.c
*/

#include <SFML/Graphics.h>
#include "rpg.h"

int	key_start(window_t *win, menus_t **menus)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
		destroy_and_free(win, menus);
		return (1);
	} else if (!sfKeyboard_isKeyPressed(sfKeyUnknown)) {
		win->i_menu++;
	}
	return (0);
}

int	key_main(window_t *win, menus_t **menus)
{
	if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
		menus[win->i_menu]->but[0]->fptr(win, menus);
	} else if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
		destroy_and_free(win, menus);
		return (1);
	}
	return (0);
}

int	key_pause(UNUSED window_t *win, UNUSED menus_t **menus)
{
	return (0);
}

int	key_param(UNUSED window_t *win, UNUSED menus_t **menus)
{
	return (0);
}
