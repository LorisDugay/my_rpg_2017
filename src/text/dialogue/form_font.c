/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** form_font.c
*/

#include "rpg.h"

void form_font(game_t *game, window_t *win)
{
	game->back.texture = sfTexture_createFromFile("img/Bosstalk.png", NULL);
	game->back.sprite = sfSprite_create();
	sfSprite_setTexture(game->back.sprite, game->back.texture, sfTrue);
	sfRenderWindow_drawSprite(win->window, game->back.sprite, NULL);
}
