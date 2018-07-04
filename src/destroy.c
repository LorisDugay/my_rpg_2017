/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** destroy.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "rpg.h"
#include "my.h"

void	destroy_but(button_t **but)
{
	int	j = 0;

	while (but && but[j]) {
		sfTexture_destroy(but[j]->text);
		sfSprite_destroy(but[j]->spri);
		free(but[j]);
		j++;
	}
	free(but);
}

void	destroy_menus(menus_t **menus)
{
	int	i = 0;

	while (menus && menus[i]) {
		sfTexture_destroy(menus[i]->t_font);
		sfSprite_destroy(menus[i]->s_font);
		destroy_but(menus[i]->but);
		free(menus[i]);
		i++;
	}
	free(menus);
}

void	destroy_win(window_t *win)
{
	sfMusic_stop(win->music);
	sfMusic_destroy(win->music);
	sfRenderWindow_close(win->window);
}

int	destroy_and_free(window_t *win, menus_t **menus)
{
	destroy_menus(menus);
	destroy_win(win);
	return (1);
}
