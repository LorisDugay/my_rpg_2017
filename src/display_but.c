/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** display_but
*/

#include <SFML/Graphics.h>
#include "my.h"
#include "rpg.h"

int display(window_t *win, menus_t **menus)
{
	int	i = 0;

	while (menus[win->i_menu]->but[i] != NULL) {
		sfSprite_setPosition(menus[win->i_menu]->but[i]->spri,
					menus[win->i_menu]->but[i]->pos);
		sfSprite_setTextureRect(menus[win->i_menu]->but[i]->spri,
					menus[win->i_menu]->but[i]->rect);
		sfRenderWindow_drawSprite(win->window,
					menus[win->i_menu]->but[i]->spri,
					NULL);
		i++;
	}
	i = 0;
	while (menus[win->i_menu]->but[i] != NULL) {
		menus[win->i_menu]->but[i]->rect.left = 0;
		i++;
	}
	return (0);
}
