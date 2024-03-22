NAME		=	push_swap
# CFLAGS		=	-Wall -Werror -Wextra

LFTDIR		=	./libft
LIBFT		=	$(LFTDIR)/libft.a

HEADERS		=	-I ./include/.
LIBS		=	$(LIBFT)
SRCDIR		=	./src
SRC			=	$(SRCDIR)/find_cheapest_insertion.c \
				$(SRCDIR)/init_stacks.c \
				$(SRCDIR)/list_utils.c \
				$(SRCDIR)/main.c \
				$(SRCDIR)/operations_r.c \
				$(SRCDIR)/operations_rr.c \
				$(SRCDIR)/operations_s_p.c \
				$(SRCDIR)/operations.c \
				$(SRCDIR)/sort_moves.c \
				$(SRCDIR)/sort_utils.c \
				$(SRCDIR)/sort.c \
				$(SRCDIR)/test_utils.c \
				$(SRCDIR)/utils.c \

OBJS		=	${SRC:.c=.o}

all: $(NAME)

$(LIBFT):
	make -C $(LFTDIR) all

%.o: %.c
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(NAME): $(LIBS) $(OBJS)
	$(CC) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	make -C $(LFTDIR) clean

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)
	make -C $(LFTDIR) fclean

re: clean all

.PHONY: all, clean, fclean, re