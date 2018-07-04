/*
** EPITECH PROJECT, 2018
** init_carac
** File description:
** initialize caracter
*/

#include "rpg.h"

charac_t init_batman(void)
{
	charac_t charac;
	charac.texture = sfTexture_createFromFile("img/batman.png", NULL);
	charac.sprite = sfSprite_create();
	charac.rect.top = 0;
	charac.rect.left = 0;
	charac.rect.width = 100;
	charac.rect.height = 118;
	charac.pos.x = 300;
	charac.pos.y = 670;
	return (charac);
}

charac_t init_superman(void)
{
	charac_t charac;
	charac.texture = sfTexture_createFromFile("img/superman.png", NULL);
	charac.sprite = sfSprite_create();
	charac.rect.top = 0;
	charac.rect.left = 235;
	charac.rect.width = 100;
	charac.rect.height = 130;
	charac.pos.x = 1000;
	charac.pos.y = 660;
	return (charac);
}

charac_t init_arrow(void)
{
	charac_t charac;
	charac.texture = sfTexture_createFromFile("img/arrow.png", NULL);
	charac.sprite = sfSprite_create();
	charac.rect.top = 0;
	charac.rect.left = 950;
	charac.rect.width = 100;
	charac.rect.height = 100;
	charac.pos.x = 1000;
	charac.pos.y = 685;
	return (charac);
}

charac_t superman_lasering(void)
{
	charac_t charac;
	charac.texture = sfTexture_createFromFile("img/superman.png", NULL);
	charac.sprite = sfSprite_create();
	charac.rect.top = 500;
	charac.rect.left = 770;
	charac.rect.width = 110;
	charac.rect.height = 100;
	charac.pos.x = 1000;
	charac.pos.y = 690;
	sfSprite_setTexture(charac.sprite, charac.texture, sfTrue);
	sfSprite_setTextureRect(charac.sprite, charac.rect);
	return (charac);
}

charac_t init_arrow_shooting(void)
{
	charac_t charac;
	charac.texture = sfTexture_createFromFile("img/arrow.png", NULL);
	charac.sprite = sfSprite_create();
	charac.rect.top = 330;
	charac.rect.left = 560;
	charac.rect.width = 100;
	charac.rect.height = 100;
	charac.pos.x = 1040;
	charac.pos.y = 685;
	sfSprite_setTexture(charac.sprite, charac.texture, sfTrue);
	sfSprite_setTextureRect(charac.sprite, charac.rect);
	return (charac);
}
