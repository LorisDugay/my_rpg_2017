/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** valid_click.c
*/

#include <SFML/Graphics.h>
#include "rpg.h"

int	valid_click(button_t *but, sfVector2i click)
{
	return ((click.x >= but->pos.x)
		&& (click.x <= (but->pos.x + but->rect.width))
		&& (click.y >= but->pos.y)
		&& (click.y <= (but->pos.y + but->rect.height)));
}
