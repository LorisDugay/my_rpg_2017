/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** initialize.c
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "my.h"
#include "rpg.h"

window_t *init_win(void)
{
	window_t	*win;

	win = malloc(sizeof(*win));
	if (!win)
		return (NULL);
	win->mode = (sfVideoMode) {1920, 1080, 32};
	win->window = sfRenderWindow_create(win->mode,
						"ICH BIN BATMAN !",
						sfResize | sfClose, NULL);
	if (!win->window)
		return (NULL);
	win->music = sfMusic_createFromFile("./sound/main-menu.ogg");
	win->m_vol = 50;
	win->m_on = 0;
	win->game_on = 0;
	win->i_menu = 0;
	sfMusic_setVolume(win->music, win->m_vol);
	return (win);
}

button_t **init_but(int index, int size)
{
	button_t	**but;

	but = malloc(sizeof(button_t *) * (size + 1));
	if (!but)
		return (NULL);
	but[size] = NULL;
	if (index == 0)
		init_start_but(but);
	else if (index == 1)
		init_main_but(but);
	else {
		if (index == 2)
			init_pause_but(but);
		else
			init_para_but(but);
	}
	return (but);
}

menus_t *init_menu(char *path, int index, int size)
{
	menus_t	*menu;

	menu = malloc(sizeof(*menu));
	if ((!menu) ||
	((menu->t_font = sfTexture_createFromFile(path, NULL)) == NULL) ||
	((menu->s_font = sfSprite_create()) == NULL))
		return (NULL);
	sfSprite_setTexture(menu->s_font, menu->t_font, sfTrue);
	menu->but = init_but(index, size);
	return (menu);
}

menus_t **init_menus(void)
{
	menus_t	**menus;

	menus = malloc(sizeof(menus_t *) * (4 + 1));
	if (!menus)
		return (NULL);
	if (!(menus[0] = init_menu("./img/menus/start/back/press_m.jpg", 0, 1))
	|| !(menus[1] = init_menu("./img/menus/main/back/main_m.jpg", 1, 4))
	|| !(menus[2] = init_menu("./img/menus/pause/back/paus_m.jpg", 2, 4))
	|| !(menus[3] = init_menu("./img/menus/param/back/para_m.jpg", 3, 3)))
		return (NULL);
	menus[0]->fptr_mouse = &mouse_start;
	menus[1]->fptr_mouse = &mouse_main;
	menus[2]->fptr_mouse = &mouse_pause;
	menus[3]->fptr_mouse = &mouse_param;
	menus[0]->fptr_key = &key_start;
	menus[1]->fptr_key = &key_main;
	menus[2]->fptr_key = &key_pause;
	menus[3]->fptr_key = &key_param;
	menus[4] = NULL;
	return (menus);
}
