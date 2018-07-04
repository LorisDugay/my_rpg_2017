/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** errors.c
*/

#include <stdlib.h>
#include "my.h"

void	option_h(void)
{
	my_putstr("\n");
	my_putstr("Welcome to the my_rpg !\n\n");
	my_putstr("Here's some cool informations before playing :\n");
	my_putstr("1. You are Batman.\n");
	my_putstr("2. Or.\n");
	my_putstr("3. Jason Todd.\n");
	my_putstr("4. You are here to kick some ass !\n");
	my_putstr("\n");
	return;
}

int	errors_and_h(int ac, char **av, char **ae)
{
	if (*ae == NULL)
		return (84);
	else if (ac != 1) {
		if (av[1][0] == '-' && av[1][1] == 'h') {
			option_h();
			return (0);
		} else
			return (84);
	}
	return (0);
}
