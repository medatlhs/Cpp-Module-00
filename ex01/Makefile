SRC = ./src/main.cpp ./src/contact.cpp ./src/phonebook.cpp
CC = c++
CPPFLAGS = -Wall -Wextra -Werror 
NAME = crappy

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
		${CC} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
		rm -f ${OBJ}

fclean: ${clean}
		rm -f ${NAME}

re : ${fclean} ${NAME}
