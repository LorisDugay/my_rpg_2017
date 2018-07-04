/*
** EPITECH PROJECT, 2018
** struct_rpg
** File description:
** rpg structures
*/

typedef struct	window_s
{
	sfVideoMode	mode;
	sfRenderWindow*	window;
	sfEvent		event;
	sfMusic*	music;
	int		m_vol;
	int		m_on;
	int		game_on;
	int		i_menu;
} window_t;

typedef struct	menus_s
{
	sfTexture	*t_font;
	sfSprite	*s_font;
	struct button_s	**but;
	int		(*fptr_mouse)(window_t *win, struct menus_s **menus);
	int		(*fptr_key)(window_t *win, struct menus_s **menus);
} menus_t;

typedef struct	button_s
{
	sfTexture	*text;
	sfSprite	*spri;
	sfVector2f	pos;
	sfIntRect	rect;
	int		(*fptr)(window_t *win, struct menus_s **menus);
} button_t;

typedef struct background_s
{
	sfTexture *texture;
	sfSprite *sprite;
} back_t;

typedef struct charachter_s
{
	sfTexture *texture;
	sfSprite *sprite;
	sfVector2f pos;
	sfIntRect rect;
	int pv;
}charac_t;

typedef struct game_s
{
	back_t back;
	charac_t charac;
	charac_t charac2;
	sfFont *font;
	sfText *text;
	sfVector2f pos;
	sfColor color;
}game_t;

typedef struct timef timef_t;
struct timef
{
	sfClock *clock;
	sfTime time_el;
	float seconds;
};
