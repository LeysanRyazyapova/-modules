SRCS	= Animal.cpp \
			Brain.cpp \
			Dog.cpp \
			Cat.cpp \
			main.cpp
HEADERS	= Animal.hpp \
			Brain.hpp \
			Cat.hpp\
			Dog.hpp
OBJS	= ${SRCS:.cpp=.o}

NAME	= animal

CC		= c++

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

%.o : %.cpp ${HEADERS}
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	${OBJS} ${HEADERS}
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.PHONY: all
all:		${NAME}

.PHONY: clean
clean:
			${RM} ${OBJS}
.PHONY: fclean
fclean:		clean
			${RM} ${NAME}
.PHONY: re
re:			fclean all%