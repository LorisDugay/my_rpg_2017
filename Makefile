##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## made by Loris D
##

CC	=	gcc

RM	=	rm

SRC_DIR		=	$(realpath ./src)

SRC_GAME_DIR	=	$(realpath ./src/game)

SRC_ATT_DIR	=	$(realpath ./src/game/attacks)

SRC_ARKHAM_DIR	=	$(realpath ./src/arkham_episode)

SRC_TEXT_DIR	=	$(realpath ./src/text)

SRC_INTRO_DIR	=	$(realpath ./src/text/intro)

SRC_SYNOP_DIR	=	$(realpath ./src/text/synopsis)

SRC_HOWTO_DIR	=	$(realpath ./src/text/how_to)

SRC_DIALOG_DIR	=	$(realpath ./src/text/dialogue)

SRC_HOW_DIR	=	$(realpath ./src/how_to_play)

SRC	=	$(SRC_DIR)/main.c				\
		$(SRC_DIR)/rpg.c				\
		$(SRC_DIR)/errors.c				\
		$(SRC_DIR)/event.c				\
		$(SRC_DIR)/initialize.c				\
		$(SRC_DIR)/init_but.c				\
		$(SRC_DIR)/windo.c				\
		$(SRC_DIR)/manage.c				\
		$(SRC_DIR)/display_but.c			\
		$(SRC_DIR)/menus_switch.c			\
		$(SRC_DIR)/do_nothing.c				\
		$(SRC_DIR)/mouse.c				\
		$(SRC_DIR)/mouse_pos.c				\
		$(SRC_DIR)/key.c				\
		$(SRC_DIR)/music.c				\
		$(SRC_DIR)/destroy.c				\
		$(SRC_DIR)/valid_click.c			\
		$(SRC_DIR)/int_to_str.c				\
		$(SRC_GAME_DIR)/anal_events_game.c		\
		$(SRC_GAME_DIR)/game_loop.c			\
		$(SRC_GAME_DIR)/draw_game.c			\
		$(SRC_GAME_DIR)/initialise_struct.c		\
		$(SRC_GAME_DIR)/cars_shifting.c			\
		$(SRC_GAME_DIR)/scenes.c			\
		$(SRC_GAME_DIR)/ia_turn.c			\
		$(SRC_ATT_DIR)/hit_marker.c			\
		$(SRC_ATT_DIR)/attacks_batman.c			\
		$(SRC_ATT_DIR)/attacks_batman_annex.c		\
		$(SRC_ATT_DIR)/attacks_superman.c		\
		$(SRC_GAME_DIR)/init_carac.c			\
		$(SRC_ATT_DIR)/attacks_arrow.c			\
		$(SRC_ATT_DIR)/attacks_arrow_annex.c		\
		$(SRC_ARKHAM_DIR)/arkham_loop.c			\
		$(SRC_ARKHAM_DIR)/init_font.c			\
		$(SRC_ARKHAM_DIR)/new_font.c			\
		$(SRC_ARKHAM_DIR)/detect_clic.c			\
		$(SRC_TEXT_DIR)/init_text.c			\
		$(SRC_TEXT_DIR)/transi.c			\
		$(SRC_TEXT_DIR)/pv.c				\
		$(SRC_DIALOG_DIR)/dialogue.c			\
		$(SRC_HOWTO_DIR)/how_to_text.c			\
		$(SRC_HOWTO_DIR)/text_for_how_to_play_one.c	\
		$(SRC_HOWTO_DIR)/text_for_how_to_play_two.c	\
		$(SRC_INTRO_DIR)/text_for_intro_one.c		\
		$(SRC_INTRO_DIR)/text_for_intro_two.c		\
		$(SRC_SYNOP_DIR)/synopsis.c			\
		$(SRC_SYNOP_DIR)/text_for_synopsis_one.c	\
		$(SRC_SYNOP_DIR)/text_for_synopsis_two.c	\
		$(SRC_HOW_DIR)/how_to_play_loop.c		\
		$(SRC_HOW_DIR)/play_font.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-Wall -Wextra -I./include

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) -l c_graph_prog

debug:
	gcc -o $(NAME) $(SRC) $(CFLAGS) -l c_graph_prog -g

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all
