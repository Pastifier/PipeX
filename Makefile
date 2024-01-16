# PROJECT
NAME := pipex

# Libft
LFT_DIR := libft
LIBFT := ft

# Necessities
CC := cc
CFLAGS := -Wall -Wextra -Werror -g3 -L$(LFT_DIR) -l$(LIBFT)

# Includes
INC_DIRS := includes
INCLUDE := includes/*
INCLUDES := $(addprefix -I, $(INC_DIRS))

# Source Files
SRC_DIR := srcs
WRP_DIR := $(SRC_DIR)/wrappers/
PPX_DIR := $(SRC_DIR)/PipeX/
WRP := w_utils.c w_access.c
PPX := main.c
SRCS := $(addprefix $(PPX_DIR), $(PPX)) \
		$(addprefix $(WRP_DIR), $(WRP))

# Misc.
RED := '\033[0;31m'
GREEN := '\033[0;32m'
DFLT := '\033[0m'

# Rules
all : $(NAME)

$(NAME):
	@make -C $(LFT_DIR)
	@if $(CC) $(CFLAGS) $(INCLUDES) $(SRCS) -o $(NAME); then \
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