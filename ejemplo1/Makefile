NAME = EstructuraDatos

SRC = Controlador.cpp main.cpp pila/Pila.cpp pila/nodoPila.cpp cola/Cola.cpp cola/nodoCola.cpp lista/lista.cpp \
		lista/nodoLista.cpp persona/persona.cpp

OBJ = ${SRC:.cpp=.o}

CC = g++

RM = rm -f

all:	${NAME}

${NAME}:	${OBJ}
			@${CC} ${OBJ} -o ${NAME}

%.o:	%.cpp
		@${CC} -c $< -o $@

clean:	
		@${RM} ${OBJ}

fclean:	clean
		@${RM} ${NAME}