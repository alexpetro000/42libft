# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afreeze <afreeze@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/01 17:30:20 by afreeze           #+#    #+#              #
#    Updated: 2020/05/10 18:28:07 by afreeze          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= libft.a
NAME_SO			= libft.so

DIR_OBJ			= obj
DIR_OBJ_SO		= obj_so

SRCS 			= ft_atoi.c			ft_bzero.c			ft_calloc.c		\
				  ft_isalnum.c		ft_isalpha.c		ft_isascii.c	\
				  ft_isdigit.c		ft_isprint.c		ft_itoa.c		\
				  ft_memccpy.c		ft_memchr.c			ft_memcmp.c		\
				  ft_memcpy.c		ft_memmove.c		ft_memset.c		\
				  ft_putchar_fd.c	ft_putendl_fd.c		ft_putnbr_fd.c	\
				  ft_putstr_fd.c	ft_split.c			ft_strchr.c		\
				  ft_strdup.c		ft_strjoin.c		ft_strlcat.c	\
				  ft_strlcpy.c		ft_strlen.c			ft_strmapi.c	\
				  ft_strncmp.c		ft_strnstr.c		ft_strrchr.c	\
				  ft_strtrim.c		ft_substr.c			ft_tolower.c	\
				  ft_toupper.c

SRCS_BONUS		= ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c	\
				  ft_lstdelone.c	ft_lstiter.c		ft_lstlast.c	\
				  ft_lstmap.c		ft_lstnew.c			ft_lstsize.c

OBJS 			= $(addprefix $(DIR_OBJ)/,$(SRCS:%.c=%.o))
OBJS_BONUS		= $(addprefix $(DIR_OBJ)/,$(SRCS_BONUS:%.c=%.o))
OBJS_SO			= $(addprefix $(DIR_OBJ_SO)/,$(SRCS:%.c=%.o) $(SRCS_BONUS:%.c=%.o))

CC 				= gcc
CFLAGS 			= -Wall -Wextra -Werror
CFLAGS_SO		= -Wall -Wextra -Werror -fpic

.PHONY: all clean fclean re test so

# ------------------------------------------------------------------------------

F_NONE			= \e[0m
F_BOLD			= \e[1m
F_RED			= \e[38;5;196m
F_ORANGE		= \e[38;5;202m
F_YELLOW		= \e[38;5;226m
F_GREEN			= \e[38;5;34m
F_CYAN			= \e[38;5;39m
F_BLUE			= \e[38;5;27m
F_PURPLE		= \e[38;5;93m

# ------------------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(F_YELLOW)Archiving\t\t$(F_BOLD)$@$(F_NONE)"
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(DIR_OBJ)/%.o : %.c
	@echo "$(F_CYAN)Compiling\t\t$(F_BOLD)$<$(F_NONE)"
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $<


# ------------------------------------------------------------------------------

bonus: all $(OBJS_BONUS)
	ar -rc $(NAME) $(OBJS_BONUS)
	ranlib $(NAME)

# ------------------------------------------------------------------------------

so: $(NAME_SO)

$(NAME_SO): $(OBJS_SO)
	@echo "$(F_YELLOW)Compiling (shared)\t$(F_BOLD)$@$(F_NONE)"
	@$(CC) -shared -o $(NAME_SO) $(OBJS_SO)

$(DIR_OBJ_SO)/%.o : %.c
	@echo "$(F_CYAN)Compiling (fpic)\t$(F_BOLD)$<$(F_NONE)"
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS_SO) -o $@ -c $<

# ------------------------------------------------------------------------------

norm:
	@norminette *.c *.h

# ------------------------------------------------------------------------------

clean:
	@rm -rf $(DIR_OBJ)
	@rm -rf $(DIR_OBJ_SO)
	@echo "$(F_GREEN)Cleaned!"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(NAME_SO)
	@echo "$(F_ORANGE)FCleaned!"

re: fclean all

# ------------------------------------------------------------------------------

love:
	@echo " ~~~~~~~~~~~~~~~~"
	@echo "$(F_BOLD)  * Make love, *"
	@echo "$(F_BOLD)   * not war! *"
	@echo "$(F_RED)    ..eeeee.."
	@echo "$(F_ORANGE)  e8\"   8   \"8e"
	@echo "$(F_YELLOW) d8     8     8b"
	@echo "$(F_GREEN) 8!   .dWb.   !8"
	@echo "$(F_CYAN) Y8 .e* 8 *e. 8P"
	@echo "$(F_BLUE)  *8*   8   *8*"
	@echo "$(F_PURPLE)    **ee8ee**$(F_NONE)"
