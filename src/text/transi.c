/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** transi.c
*/

#include "rpg.h"

static int is_click(window_t *win, menus_t **menus)
{
	if (win->event.type == sfEvtClosed) {
		destroy_and_free(win, menus);
		sfRenderWindow_close(win->window);
		return (2);
	} else if ((win->event.type == sfEvtMouseButtonPressed)) {
		return (1);
	}
	return (0);
}

void text_transi_one(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 200;
	word = "Vous avez battu superman, maintenant vous allez combattre";
	size = 40;
	itext(game, word, size);
	draw_text(game, win);
	game->pos.x = 750;
	game->pos.y = 260;
	word = "Green arrow, en surpassant superman, vous avez debloque le";
	size = 40;
	itext(game, word, size);
	draw_text(game, win);
}

void text_transi_three(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 320;
	word = "Batarang,qui inflige 40 degats utilisez le pour battre Arrow !";
	size = 40;
	itext(game, word, size);
	draw_text(game, win);
}

int text_transi(game_t *game, char *word, int size, window_t *win,
		UNUSED menus_t **menus)
{
	game->back.texture = sfTexture_createFromFile("img/scene_synop.jpg",
						NULL);
	game->back.sprite = sfSprite_create();
	sfSprite_setTexture(game->back.sprite, game->back.texture, sfTrue);
	sfRenderWindow_drawSprite(win->window, game->back.sprite, NULL);
	text_transi_one(game, word, size, win);
	text_transi_three(game, word, size, win);
	sfRenderWindow_setFramerateLimit(win->window, 30);
	sfRenderWindow_display(win->window);
	return (0);
}

int transition(game_t *game, char *word, int size, window_t *win,
	menus_t **menus)
{
	text_transi(game, word, size, win, menus);
	while (sfRenderWindow_isOpen(win->window)) {
		while (sfRenderWindow_pollEvent(win->window, &win->event)) {
			if (is_click(win, menus) == 1)
				return (scene2(win, menus));
		}
	}
	return (0);
}
