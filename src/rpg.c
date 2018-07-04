/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** rpg.c
*/

#include <SFML/Graphics.h>
#include "my.h"
#include "rpg.h"

int	my_rpg(int ac, char **av, char **ae)
{
	window_t	*win;
	menus_t		**menus;

	if ((errors_and_h(ac, av, ae)) == 84)
		return (84);
	if (((win = init_win()) == NULL) ||
		((menus = init_menus()) == NULL))
		return (84);
	game(win, menus);
	return (0);
}
