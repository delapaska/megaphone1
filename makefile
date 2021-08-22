NAME = megaphone

SRC = ${NAME}.cpp

all: ${NAME}

${NAME}:
	clang++ -Wall -Wextra -Werror -o ${NAME} ${SRC}
	
clean:
	echo -e "Nothing to clean,sry"
fclean:
	rm${NAME}
re: fclean all
