/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** mouse.c
*/

#include <SFML/Graphics.h>
#include "rpg.h"

int	mouse_start(window_t *win, UNUSED menus_t **menus)
{
	if (win->event.type == sfEvtMouseButtonPressed)
		win->i_menu = 1;
	return (0);
}

int	mouse_main(window_t *win, menus_t **menus)
{
	sfVector2i	click = sfMouse_getPositionRenderWindow(win->window);
	int		status = win->i_menu;
	int		i = win->i_menu;
	int		j = 0;

	while (menus[i]->but && menus[i]->but[j]) {
		if ((valid_click(menus[i]->but[j], click)) == 1) {
			status = menus[i]->but[j]->fptr(win, menus);
			break;
		}
		j++;
	}
	return (status);
}

int	mouse_pause(window_t *win, menus_t **menus)
{
	sfVector2i	click = sfMouse_getPositionRenderWindow(win->window);
	int		status = 0;
	int		i = win->i_menu;
	int		j = 0;

	while (menus[i]->but && menus[i]->but[j]) {
		if ((valid_click(menus[i]->but[j], click)) == 1) {
			status = menus[i]->but[j]->fptr(win, menus);
			break;
		}
		j++;
	}
	return (status);
}

int	mouse_param(window_t *win, menus_t **menus)
{
	sfVector2i	click = sfMouse_getPositionRenderWindow(win->window);
	int		status = win->i_menu;
	int		i = win->i_menu;
	int		j = 0;

	while (menus[i]->but && menus[i]->but[j]) {
		if ((valid_click(menus[i]->but[j], click)) == 1) {
			status = menus[i]->but[j]->fptr(win, menus);
			break;
		}
		j++;
	}
	return (status);
}
