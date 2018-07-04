/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** music.c
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "rpg.h"
#include "rpg.h"

int music(window_t *win)
{
	if (win->m_on == 0) {
		sfMusic_play(win->music);
		win->m_on = 1;
	}
	return (0);
}
