/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** manage.c
*/

#include <SFML/Graphics.h>
#include "rpg.h"

int	manage(window_t *win, menus_t **menus)
{
	int	status = 0;

	while (sfRenderWindow_pollEvent(win->window, &win->event)) {
		if (win->event.type == sfEvtClosed) {
			destroy_and_free(win, menus);
			return (1);
		} else if (win->event.type == sfEvtKeyPressed) {
			status = menus[win->i_menu]->fptr_key(win, menus);
		}
	}
	if (status == 1)
		return (1);
	else if ((mouse_pos(win, menus)) == 1)
		return (1);
	return (0);
}
