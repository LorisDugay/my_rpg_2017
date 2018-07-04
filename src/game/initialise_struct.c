/*
** EPITECH PROJECT, 2018
** initialize_struct
** File description:
** non
*/

#include "rpg.h"

game_t init_game(void)
{
	game_t game;
	game.back.texture = sfTexture_createFromFile("img/scene1.jpg", NULL);
	game.back.sprite = sfSprite_create();
	sfSprite_setTexture(game.back.sprite, game.back.texture, sfTrue);
	game.charac = init_batman();
	game.charac2 = init_superman();
	game.charac.pv = 100;
	game.charac2.pv = 100;
	sfSprite_setTexture(game.charac.sprite, game.charac.texture, sfTrue);
	sfSprite_setTextureRect(game.charac.sprite, game.charac.rect);
	sfSprite_setTexture(game.charac2.sprite, game.charac2.texture, sfTrue);
	sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
	return (game);
}

game_t init_game2(void)
{
	game_t game;
	game.back.texture = sfTexture_createFromFile("img/scene2.jpg", NULL);
	game.back.sprite = sfSprite_create();
	sfSprite_setTexture(game.back.sprite, game.back.texture, sfTrue);
	game.charac = init_batman();
	game.charac2 = init_arrow();
	game.charac.pos.y += 50;
	game.charac2.pos.y += 50;
	game.charac.pv = 100;
	game.charac2.pv = 100;
	sfSprite_setTexture(game.charac.sprite, game.charac.texture, sfTrue);
	sfSprite_setTextureRect(game.charac.sprite, game.charac.rect);
	sfSprite_setTexture(game.charac2.sprite, game.charac2.texture, sfTrue);
	sfSprite_setTextureRect(game.charac2.sprite, game.charac2.rect);
	return (game);
}

timef_t init_time(void)
{
	timef_t time;
	time.clock = sfClock_create();
	time.time_el.microseconds = 0;
	time.seconds = 0;
	return (time);
}

charac_t batman_throwing(void)
{
	charac_t charac;
	charac.texture = sfTexture_createFromFile("img/batman.png", NULL);
	charac.sprite = sfSprite_create();
	charac.rect.top = 230;
	charac.rect.left = 94;
	charac.rect.width = 110;
	charac.rect.height = 100;
	charac.pos.x = 300;
	charac.pos.y = 690;
	sfSprite_setTexture(charac.sprite, charac.texture, sfTrue);
	sfSprite_setTextureRect(charac.sprite, charac.rect);
	return (charac);
}
