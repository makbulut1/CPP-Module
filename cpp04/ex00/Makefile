NAME = Animal

SRCS = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

CFAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:%.cpp= %.o)

RM = rm -rf

C++ = c++

all : $(NAME)

$(NAME) : $(OBJS)
	$(C++) $(CFLAGS) $(SRCS) -o $(NAME)  -Wno-shadow

clean :
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY = all clean fclean re
