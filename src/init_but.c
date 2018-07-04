/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** init_but.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "rpg.h"

button_t	*init_one_but(char *path, sfVector2f pos, sfIntRect rect,
				void (*fptr))
{
	button_t	*but;

	if (((but = malloc(sizeof(*but))) == NULL) ||
		((but->text = sfTexture_createFromFile(path, NULL)) == NULL) ||
		((but->spri = sfSprite_create()) == NULL))
		return (NULL);
	sfSprite_setTexture(but->spri, but->text, sfTrue);
	but->pos = pos;
	but->rect = rect;
	but->fptr = fptr;
	return (but);
}

button_t	**init_start_but(button_t **but)
{
	but[0] = NULL;
	return (but);
}

button_t	**init_main_but(button_t **but)
{
	but[0] = init_one_but("./img/menus/main/but/story.png",
				(sfVector2f){310, 425},
				(sfIntRect){0, 0, 200, 100},
				&game_loop);
	but[1] = init_one_but("./img/menus/main/but/option.png",
				(sfVector2f){310, 557},
				(sfIntRect){0, 0, 195, 65},
				&get_params);
	but[2] = init_one_but("./img/menus/main/but/arkham.png",
				(sfVector2f){310, 642},
				(sfIntRect){0, 0, 390, 65},
				&arkham_loop);
	but[3] = init_one_but("./img/menus/main/but/exit.png",
				(sfVector2f){310, 722},
				(sfIntRect){0, 0, 120, 65},
				&destroy_and_free);
	return (but);
}

button_t	**init_pause_but(button_t **but)
{
	but[0] = init_one_but("./img/menus/pause/but/resume.png",
				(sfVector2f){305, 330},
				(sfIntRect){0, 0, 175, 65},
				&go_back);
	but[1] = init_one_but("./img/menus/pause/but/option.png",
				(sfVector2f){305, 415},
				(sfIntRect){0, 0, 195, 65},
				&get_params);
	but[2] = init_one_but("./img/menus/pause/but/save.png",
				(sfVector2f){305, 500},
				(sfIntRect){0, 0, 120, 65},
				&do_nothing);
	but[3] = init_one_but("./img/menus/pause/but/exit.png",
				(sfVector2f){305, 580},
				(sfIntRect){0, 0, 120, 65},
				&get_main);
	return (but);
}

button_t	**init_para_but(button_t **but)
{
	but[0] = init_one_but("./img/menus/param/but/audio.png",
				(sfVector2f){460, 585},
				(sfIntRect){0, 0, 260, 50},
				&audio_vol);
	but[1] = init_one_but("./img/menus/param/but/howtoplay.png",
				(sfVector2f){460, 655},
				(sfIntRect){0, 0, 265, 50},
				&how_loop);
	but[2] = init_one_but("./img/menus/param/but/return.png",
				(sfVector2f){1600, 0},
				(sfIntRect){0, 0, 280, 200},
				&get_back);
	return (but);
}
