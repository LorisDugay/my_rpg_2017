/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** init_text.c
*/

#include "my.h"
#include "rpg.h"

void itext(game_t *game, char *word, int size)
{
	game->color = sfWhite;
	game->font = sfFont_createFromFile("police/antilles.ttf");
	game->text = sfText_create();
	sfText_setString(game->text, word);
	sfText_setFont(game->text, game->font);
	sfText_setCharacterSize(game->text, size);
	sfText_setPosition(game->text, game->pos);
	sfText_setColor(game->text, game->color);
}

void draw_text(game_t *game, window_t *win)
{
	sfRenderWindow_drawText(win->window, game->text, NULL);
}

void text_form_one(game_t *game, char *word, int size, window_t *win)
{
	word = "Je suis Batman ... Et voici mon histoire";
	size = 30;
	itext(game, word, size);
	draw_text(game, win);
}
