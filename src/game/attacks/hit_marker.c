/*
** EPITECH PROJECT, 2018
** hit_marker
** File description:
** hit_marker when carac is hit
*/

#include "rpg.h"

void hit_marker(window_t *win, game_t game, charac_t carac)
{
	sfTexture *texture = sfTexture_createFromFile("img/superman.png", NULL);
	sfSprite *sprite = sfSprite_create();
	sfIntRect rect;
	timef_t time = init_time();
	sfVector2f pos = carac.pos;

	pos.x += 50;
	pos.y += 10;
	rect.top = 650;
	rect.left = 800;
	rect.width = 100;
	rect.height = 100;
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setTextureRect(sprite, rect);
	sfSprite_setPosition(sprite, pos);

	while (1) {
		draw_game(game, win);
		sfRenderWindow_drawSprite(win->window, sprite, NULL);
		time.time_el = sfClock_getElapsedTime(time.clock);
		time.seconds = time.time_el.microseconds / 10000;
		sfRenderWindow_display(win->window);
		if (time.seconds > 3)
			return;
	}
}
