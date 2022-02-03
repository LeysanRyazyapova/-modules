SRCS	= Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \
			main.cpp
HEADERS	= Zombie.hpp
OBJS	= ${SRCS:.cpp=.o}

NAME	= zombie

CC		= clang++

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
re:			fclean all