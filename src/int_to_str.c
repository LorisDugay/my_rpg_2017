/*
** EPITECH PROJECT, 2018
** int_to_str
** File description:
** turn an int to a string
*/

#include <stdlib.h>
#include "rpg.h"
#include "my.h"

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] && str[i] != '\0') {
		i++;
	}
	return (i);
}

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_putstr(char const *str)
{
	int i = 0;

	while (str[i] && str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
	return (i);
}

char *my_revstr(char *str)
{
	int i;
	int lenght = my_strlen(str);
	char exc;

	i = 0;
	while (i < (lenght - 1)) {
		exc = str[i];
		str[i] = str[(lenght - 1)];
		str[(lenght - 1)] = exc;
		i++;
		lenght--;
	}
	return (str);
}

char *int_to_str(int nb)
{
	int inc = 0;
	char *str = malloc(sizeof(char) * 4);

	if (str == NULL)
		return (NULL);
	str[3] = '\0';
	while (inc < 3) {
		str[inc] = 0;
		inc++;
	}
	inc = 0;
	while (nb >= 1) {
		str[inc] = nb % 10 + 48;
		nb = nb / 10;
		inc++;
	}
	str = my_revstr(str);
	return (str);
}
