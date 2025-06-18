NAME = ircserv

CCFLAGS = -std=c++98 -Wall -Werror -Wextra

CC = c++

SRC = Main.cpp \
		Serveur.cpp \
		Client.cpp \


%.o: %.cpp
			$(CC) &(CCFLAGS) -c $< -o $@

OBJS = $(SRC:%.cpp=%.o)

$(NAME): $(OBJS)
				$(CC) $(CCFLAGS) $(SRC) -o ${NAME}

all: $(NAME)

clean:
				rm -f %(OBJS)

fclean: clean
				rm -f $(NAME)

re: fclean
				make

PHONY: all clean fclean re