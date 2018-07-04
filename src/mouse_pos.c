/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** mouse_pos.c
*/

#include <SFML/Graphics.h>
#include "rpg.h"

int	mouse_click(window_t *win, menus_t **menus, UNUSED int j)
{
	int	status = 0;

	if (win->event.type == sfEvtMouseButtonPressed) {
		if ((status = menus[win->i_menu]->fptr_mouse(win, menus)) != 0)
			return (status);
	}
	return (0);
}

int	pos_or_click(window_t *win, menus_t **menus, sfVector2i click, int j)
{
	int	status = 0;

	if ((valid_click(menus[win->i_menu]->but[j], click)) == 1) {
		menus[win->i_menu]->but[j]->rect.left =
			(menus[win->i_menu]->but[j]->rect.left) +
			(menus[win->i_menu]->but[j]->rect.width);
		if ((status = mouse_click(win, menus, j)) != 0) {
			return (status);
		}
	}
	return (0);
}

int	mouse_pos(window_t *win, menus_t **menus)
{
	sfVector2i	click = sfMouse_getPositionRenderWindow(win->window);
	int		status = 0;
	int		j = 0;

	while (menus[win->i_menu]->but && menus[win->i_menu]->but[j]) {
		if ((status = pos_or_click(win, menus, click, j)) != 0) {
			return (status);
		}
		j++;
	}
	if (win->i_menu == 0) {
		menus[win->i_menu]->fptr_mouse(win, menus);
	}
	return (0);
}
