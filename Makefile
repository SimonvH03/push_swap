NAME		=	push_swap
# CFLAGS		=	-Wall -Werror -Wextra

LFTDIR		=	./libft
LIBFT		=	$(LFTDIR)/libft.a

HEADERS		=	-I ./include/.
LIBS		=	$(LIBFT)
SRCDIR		=	./src
SRC			=	$(SRCDIR)/create_elements.c \
				$(SRCDIR)/list_utils.c \
				$(SRCDIR)/operations_utils.c \
				$(SRCDIR)/operations_r.c \
				$(SRCDIR)/operations_rr.c \
				$(SRCDIR)/operations_s_p.c \
				$(SRCDIR)/push_swap.c \

OBJS		=	${SRC:.c=.o}

all: $(NAME)

$(LIBFT):
	make -C $(LFTDIR) all

%.o: %.c
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(NAME): $(OBJS) $(LIBS)
	$(CC) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	make -C $(LFTDIR) fclean

re: clean all

.PHONY: all, clean, fclean, re