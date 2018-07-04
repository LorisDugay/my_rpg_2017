/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** menus_switch.c
*/

#include "rpg.h"

int	get_params(window_t *win, UNUSED menus_t **menus)
{
	win->i_menu = 3;
	return (0);
}

void	audio_vol(window_t *win, menus_t **menus)
{
	if (menus[win->i_menu]->but[0]->rect.top >= 165)
		menus[win->i_menu]->but[0]->rect.top = 0;
	else
		menus[win->i_menu]->but[0]->rect.top += 55;
}

void	get_back(window_t *win, UNUSED menus_t **menus)
{
	if (win->game_on == 0)
		win->i_menu = 1;
	else
		win->i_menu = 2;
}

int	go_back(UNUSED window_t *win, UNUSED menus_t **menus)
{
	return (2);
}

void	get_main(window_t *win, UNUSED menus_t **menus)
{
	win->i_menu = 1;
}
