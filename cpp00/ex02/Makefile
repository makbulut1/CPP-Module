NAME = test

SRCS =  Account

OBJ = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(SRCS) $(CFLAGS) -o $(NAME)

.o : .cpp
	$(c++) -c $^ -o $@

re : fclean all

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

.PHONY : all clean re fclean