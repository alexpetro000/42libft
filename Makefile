
NAME 		= libft.a
NAMESO		= libft.so

INC_DIR		= includes
OBJ_DIR		= obj
SRC_DIR		= src

CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror

SRCS		= $(subst $(SRC_DIR)/,,$(shell find $(SRC_DIR) -type f -name '*.c'))
OBJS 		= $(addprefix $(OBJ_DIR)/,$(SRCS:%.c=%.o))


.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INC_DIR) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

test:
	norminette $(SRCS)
	ceedling test:all

re: fclean all

so: $(NAMESO)

$(NAMESO): $(OBJS)
	$(CC) -shared -o $(NAMESO) $(OBJS)
