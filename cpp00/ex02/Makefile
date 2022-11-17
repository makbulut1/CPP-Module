NAME = test

SRCS =  $(wildcard *.cpp)

OBJ = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(SRCS) $(CFLAGS) -o $(NAME)

re : fclean all

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

.PHONY : all clean re fclean