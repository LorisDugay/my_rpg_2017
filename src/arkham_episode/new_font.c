/*
** EPITECH PROJECT, 2018
** rppg
** File description:
** init_font.c
*/

#include "my.h"
#include "rpg.h"

void new_font(game_t *game, window_t *win, char *word, int size)
{
	game->back.texture = sfTexture_createFromFile("img/scene_synop.jpg",
						NULL);
	game->back.sprite = sfSprite_create();
	sfSprite_setTexture(game->back.sprite, game->back.texture, sfTrue);
	sfRenderWindow_drawSprite(win->window, game->back.sprite, NULL);
	synopsis(game, word, size, win);
	sfRenderWindow_setFramerateLimit(win->window, 30);
	sfRenderWindow_display(win->window);
}
