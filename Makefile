NAME = ft_minishell2

INCLUDE_PATH = -I./include \
				-I./lib/libft/includes 
LIBFT_DIR = ./lib/libft
LIB = -L$(LIBFT_DIR) -lft
FLAGS = -Wall -Werror -Wextra
SRC_PATH = ./src

SRC_FILES =	main.c

FILES = $(addprefix $(SRC_PATH),$(SRC_FILES))

all: libft_all 

libft_all:
	@make -C $(LIBFT_DIR) all

libft_clean:
	@make -C $(LIBFT_DIR) clean

libft_fclean:
	@make -C $(LIBFT_DIR) fclean

${NAME}: 
	@echo ft_minishell2 compilation
	gcc $(INCLUDE_PATH) $(FLAGS) $(FILES) -o $(NAME) $(LIB) 

clean: libft_clean
	@echo Delete .o files
	@rm -f $(FILES:.c=.o)

fclean: libft_fclean clean
	@echo Delete server $(SERVER_NAME)
	@rm -f $(SERVER_NAME)

re: fclean all