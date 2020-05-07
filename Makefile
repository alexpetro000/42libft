# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/01 17:30:20 by afreeze           #+#    #+#              #
#    Updated: 2020/05/07 17:22:28 by afreeze          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= libft.a
NAME_SO			= libft.so

DIR_INCLUDES	= .
DIR_OBJ			= obj
DIR_OBJ_SO		= obj_so
DIR_SRC			= .

SRCS_BONUS		= $(subst $(DIR_SRC)/,,$(shell find $(DIR_SRC) -type f -name 'ft_lst*.c' -o -name '*_bonus.c'))
SRCS			= $(filter-out $(SRCS_BONUS), $(subst $(DIR_SRC)/,,$(shell find $(DIR_SRC) -type f -name '*.c')))

OBJS 			= $(addprefix $(DIR_OBJ)/,$(SRCS:%.c=%.o))
OBJS_BONUS		= $(addprefix $(DIR_OBJ)/,$(SRCS_BONUS:%.c=%.o))
OBJS_SO			= $(addprefix $(DIR_OBJ_SO)/,$(SRCS:%.c=%.o) $(SRCS_BONUS:%.c=%.o))

CC 				= gcc
CFLAGS 			= -Wall -Wextra -Werror -O2
CFLAGS_SO		= -Wall -Wextra -Werror -O2 -fpic

.PHONY: all clean fclean re test so

# ------------------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(DIR_OBJ)/%.o : $(DIR_SRC)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(DIR_INCLUDES) -o $@ -c $<

# ------------------------------------------------------------------------------

bonus: all $(OBJS_BONUS)
	ar -rc $(NAME) $(OBJS_BONUS)
	ranlib $(NAME)

# ------------------------------------------------------------------------------

so: $(NAME_SO)

$(NAME_SO): $(OBJS_SO)
	$(CC) -shared -o $(NAME_SO) $(OBJS_SO)

$(DIR_OBJ_SO)/%.o : $(DIR_SRC)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS_SO) -I$(DIR_INCLUDES) -o $@ -c $<

# ------------------------------------------------------------------------------

test:
	@echo "To use tests, select branch 'test'"

# ------------------------------------------------------------------------------

norm:
	norminette $(SRCS)

# ------------------------------------------------------------------------------

clean:
	rm -rf $(DIR_OBJ)
	rm -rf $(DIR_OBJ_SO)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(NAME_SO)

re: fclean all

# ------------------------------------------------------------------------------

love:
	@echo " ~~~~~~~~~~~~~~~~"
	@echo "\e[1m  * Make love, *"
	@echo "\e[1m   * not war! *"
	@echo "\e[38;5;196m    ..eeeee.."
	@echo "\e[38;5;202m  e8\"   8   \"8e"
	@echo "\e[38;5;226m d8     8     8b"
	@echo "\e[38;5;34m 8!   .dWb.   !8"
	@echo "\e[38;5;39m Y8 .e* 8 *e. 8P"
	@echo "\e[38;5;27m  *8*   8   *8*"
	@echo "\e[38;5;93m    **ee8ee**\e[33;0m"
