/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** rpg.h
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <unistd.h>

#ifndef __RPG_H__
# define __RPG_H__

# define UNUSED __attribute__((unused))
# define UINT unsigned int

#include "struct_rpg.h"

int my_rpg(int ac, char **av, char **ae);
int errors_and_h(int ac, char **av, char **ae);

menus_t **init_menus(void);
window_t *init_win(void);

button_t *init_one_but(char *path, sfVector2f pos, sfIntRect rect,
			void (*fptr));
button_t **init_start_but(button_t **but);
button_t **init_main_but(button_t **but);
button_t **init_pause_but(button_t **but);
button_t **init_para_but(button_t **but);

int get_params(window_t *win, menus_t **menus);
void audio_vol(window_t *win, menus_t **menus);
void get_back(window_t *win, menus_t **menus);
int go_back(window_t *win, menus_t **menus);
void get_main(window_t *win, menus_t **menus);
int do_nothing(window_t *win, menus_t **menus);

int loop_pause(window_t *win, menus_t **menus, game_t *game);

int mouse_pos(window_t *win, menus_t **menus);

int mouse_start(window_t *win, menus_t **menus);
int mouse_main(window_t *win, menus_t **menus);
int mouse_pause(window_t *win, menus_t **menus);
int mouse_param(window_t *win, menus_t **menus);

int key_start(window_t *win, menus_t **menus);
int key_main(window_t *win, menus_t **menus);
int key_pause(window_t *win, menus_t **menus);
int key_param(window_t *win, menus_t **menus);

int evnt(window_t *win, menus_t **menus);
int game(window_t *win, menus_t **menus);

int valid_click(button_t *but, sfVector2i click);

int manage(window_t *win, menus_t **menus);

int music(window_t *win);

int display(window_t *win, menus_t **menus);

int destroy_and_free(window_t *win, menus_t **menus);

void hit_marker(window_t *win, game_t game, charac_t carac);
int transition(game_t *game, char *word, int size, window_t *win,
	menus_t **menus);
char *int_to_str(int nb);


/* TEXT FUNCTION */

int text_transi(game_t *game, char *word, int size, window_t *win,
		menus_t **menus);
void pv(game_t *game, char *word, int size, window_t *win);
void how_to_text(game_t *game, char *word, int size, window_t *win);
void play_font(game_t *game, window_t *win);
int how_loop(window_t *win, menus_t **menus, char *word, int size);
int des_arkham(window_t *win, menus_t **menus);
int mouse_detec(window_t *win, game_t *game);
void new_font(game_t *game, window_t *win, char *word, int size);
void init_font(game_t *game, window_t *win);
void itext(game_t *game, char *word, int size);
void draw_text(game_t *game, window_t *win);
void text_form_one(game_t *game, char *word, int size, window_t *win);
void intro(game_t *game, char *word, int size, window_t *win);
void synopsis(game_t *game, char *word, int size, window_t *win);
int arkham_loop(window_t *win, menus_t **menu, char *word, int size);

void first_paragraph(game_t *game, char *word, int size, window_t *win);
void second_paragraph(game_t *game, char *word, int size, window_t *win);
void third_paragraph(game_t *game, char *word, int size, window_t *win);
void quad_paragraph(game_t *game, char *word, int size, window_t *win);
void five_paragraph(game_t *game, char *word, int size, window_t *win);
void six_paragraph(game_t *game, char *word, int size, window_t *win);
void seven_paragraph(game_t *game, char *word, int size, window_t *win);
void eight_paragraph(game_t *game, char *word, int size, window_t *win);
void nine_paragraph(game_t *game, char *word, int size, window_t *win);

void intro_first_paragraph(game_t *game, char *word, int size, window_t *win);
void intro_second_paragraph(game_t *game, char *word, int size, window_t *win);
void intro_third_paragraph(game_t *game, char *word, int size, window_t *win);
void intro_quad_paragraph(game_t *game, char *word, int size, window_t *win);
void intro_five_paragraph(game_t *game, char *word, int size, window_t *win);
void intro_six_paragraph(game_t *game, char *word, int size, window_t *win);
void intro_seven_paragraph(game_t *game, char *word, int size, window_t *win);

void play_first_paragraph(game_t *game, char *word, int size, window_t *win);
void play_two_paragraph(game_t *game, char *word, int size, window_t *win);
void play_three_paragraph(game_t *game, char *word, int size, window_t *win);
void play_for_paragraph(game_t *game, char *word, int size, window_t *win);
void play_five_paragraph(game_t *game, char *word, int size, window_t *win);
void play_seven_paragraph(game_t *game, char *word, int size, window_t *win);
void play_eight_paragraph(game_t *game, char *word, int size, window_t *win);
void play_nine_paragraph(game_t *game, char *word, int size, window_t *win);

/* GAME FUNCTIONS */

int game_loop(window_t *win, menus_t **menu, char *word, int size);
void draw_game(game_t game, window_t *win);
void draw_charac(window_t *win, charac_t charac);
int loop_anal_events_game(window_t *win, menus_t **menu, game_t *game);
int loop_anal_events_game2(window_t *win, menus_t **menu, game_t *game);
game_t init_game(void);
game_t init_game2(void);
void high_kick(window_t *win, game_t game, menus_t **menu);
void direct_punch(window_t *win, game_t game, menus_t **menu);
void batarang(window_t *win, game_t game, menus_t **menu);
timef_t init_time(void);
void batarang_in_air(window_t *win, game_t game, menus_t **menu);
charac_t batman_throwing(void);
timef_t init_time(void);
void uppercut(window_t *win, game_t game, menus_t **menu);
charac_t init_batman(void);
charac_t init_superman(void);
charac_t init_arrow(void);
void attacks_superman(window_t *win, game_t game);
void punch(window_t *win, game_t game, menus_t **menu);
void flatten(window_t *win, game_t game, menus_t **menu);
int clean(window_t *win, game_t *game);
void punch_arrow(window_t *win, game_t game, menus_t **menu);
void kick_arrow(window_t *win, game_t game, menus_t **menu);
void arrow_arrow(window_t *win, game_t game, menus_t **menu);
void arrow_in_air(window_t *win, game_t game, menus_t **menu);
charac_t init_arrow_shooting(void);
sfVector2f batman_go(window_t *win, game_t game, menus_t **menu);
int anal_events_attack(window_t *win, game_t game, menus_t **menu);
sfVector2f arrow_jump(window_t *win, game_t game, menus_t **menu);
sfVector2f superman_go(window_t *win, game_t game, menus_t **menu);
int scene2(window_t *win, menus_t **menu);
void ia_turn_superman(window_t *win, game_t *game, menus_t **menu);
void ia_turn_arrow(window_t *win, game_t *game, menus_t **menu);

#endif /* __RPG_H__ */
