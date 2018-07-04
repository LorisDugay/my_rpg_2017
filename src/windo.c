/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** windo.c
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "my.h"
#include "rpg.h"

int game(window_t *win, menus_t **menus)
{
	while (sfRenderWindow_isOpen(win->window)) {
		sfRenderWindow_clear(win->window, sfBlack);
		sfRenderWindow_drawSprite(win->window,
					menus[(win->i_menu)]->s_font, NULL);
		music(win);
		display(win, menus);
		sfRenderWindow_display(win->window);
		sfRenderWindow_setFramerateLimit(win->window, 30);
		manage(win, menus);
	}
	sfRenderWindow_destroy(win->window);
	free(win);
	return (0);
}
