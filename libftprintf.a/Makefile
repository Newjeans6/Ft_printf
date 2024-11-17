NAME  = libftprintf.a
SRCS = ft_function.c t_function2.c ft_printf.c

OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

CF = -Wall -Wextra -Werror
ar = ar rcs

$(OBJDIR)/%.o: %.c libft.h
        @mkdir -p $(OBJDIR)
        $(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
    $(ar) $(NAME) $(OBJS)

clean:
    rm -rf $(OBJDIR)
fclean: clean
    rm -f $(NAME)
re: fclean all
    make all
.PHONY: all clean fclean re
        