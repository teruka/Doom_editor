NAME = doom_editor

#Color
BLUE 	= \033[2K\r\033[36m
GREEN 	= \e[92m
WITHE 	= \033[37m
YELLOW	= \033[33m
END 	= \033[0m

#Dir
OBJ_PATH = ./obj/
SRC_PATH = ./srcs/
INC_PATH = ./include/

#file
SRC_NAME = 	main.c event.c event_state.c event_state_2.c bresenham.c display.c color.c hud_editor.c hud_images.c hud_utils.c int_tab_editor.c select_event.c select_event_bis.c hud_select_textures.c hud_select_textures_bis.c hud_style.c hud_dark_theme.c exit_parse.c exit_parse_function.c hud_textures_functions.c hud_textures_functions_bis.c hud_textures_functions_ter.c exit_parse_floor.c exit_parse_wall.c exit_parse_wall_2.c exit_parse_base_floor.c

# mlx library
MLX        = ./miniLibx_macos/
MLX_LIB    = $(addprefix $(MLX),mlx.a)
MLX_INC    = -I ./miniLibx_macos
MLX_LNK    = -L ./miniLibx_macos -l mlx -framework OpenGL -framework AppKit

# ft library
FT        = ./libft/
FT_LIB    = $(addprefix $(FT),libft.a)
FT_INC    = -I ./libft
FT_LNK    = -L ./libft -l ft

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ	= $(addprefix $(OBJ_PATH), $(SRC_NAME:.c=.o))

#compil
CC = gcc
CFLAGS = -Werror -Wextra -Wall $(INC_HDR) -O3 -march=native -flto -ffast-math

all: $(NAME)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c include/doom_editor.h | $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(FT_INC) $(MLX_INC) -I $(INC_PATH)  -o $@ -c $<
	@printf "$(BLUE)>>Compiling $(WITHE) $< $(END)"

$(NAME): $(OBJ)
	@$(MAKE) -C libft
	@$(MAKE) -C minilibx_macos
	@$(CC) $(OBJ) $(MLX_LNK) $(FT_LNK) -o $(NAME)
	@printf "$(YELLOW)$(NAME)$(END)		$(GREEN)[compiled]$(END)\n"


clean:
	@rm -rf $(OBJ_PATH)
	@cd libft && $(MAKE) clean

fclean: clean
	@rm -f $(NAME)
	@cd libft && $(MAKE) fclean

re: fclean all