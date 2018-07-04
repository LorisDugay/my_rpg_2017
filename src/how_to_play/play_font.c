/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** play_font.c
*/

#include "my.h"
#include "rpg.h"

void play_font(game_t *game, window_t *win)
{
	game->back.texture = sfTexture_createFromFile("img/scene2.jpg", NULL);
	game->back.sprite = sfSprite_create();
	sfSprite_setTexture(game->back.sprite, game->back.texture, sfTrue);
	sfRenderWindow_drawSprite(win->window, game->back.sprite, NULL);
}
