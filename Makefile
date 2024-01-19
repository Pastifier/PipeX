# PROJECT
NAME := pipex

# Libft
LFT_DIR := libft
LIBFT := ft

# Necessities
CC := cc
CFLAGS := -Wall -Wextra -Werror -g3 -L$(LFT_DIR) -l$(LIBFT) -fsanitize=address,undefined

# Includes
INC_DIRS := includes
INCLUDE := pipex.h wrappers.h log.h
INCLUDES := $(addprefix $(INC_DIRS)/, $(INCLUDE))

# Source Files
SRC_DIR := srcs
WRP_DIR := $(SRC_DIR)/wrappers/
PPX_DIR := $(SRC_DIR)/mandatory/
WRP := w_utils.c w_access.c
PPX := main.c utils.c
SRCS := $(addprefix $(PPX_DIR), $(PPX)) \
		$(addprefix $(WRP_DIR), $(WRP))

# Misc.
RED := '\033[0;31m'
GREEN := '\033[0;32m'
DFLT := '\033[0m'

# Rules
all : $(NAME)

$(NAME): $(SRCS) $(INCLUDES)
	@make -C $(LFT_DIR)
	@if $(CC) $(CFLAGS) -I$(INC_DIRS) $(SRCS) -o $(NAME); then \
		printf "\n$(GREEN)Enjoy your $(NAME)!$(DFLT)\n"; \
	else \
		printf "\n$(RED)Oops.. Something went wrong!$(DFLT)\n"; \
	fi

clean:
	@make -C $(LFT_DIR) clean

fclean:
	@make -C $(LFT_DIR) fclean
	@rm -rf $(NAME)

re: fclean all