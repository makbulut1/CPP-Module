NAME = myzombies

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	g++ $(CFLAGS) $(SRCS) -o $(NAME)

re : fclean all

fclean :
	rm -rf $(OBJS) $(NAME)

clean :
	rm -rf $(OBJS)

.PHONY : all re fclean clean
