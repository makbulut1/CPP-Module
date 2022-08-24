NAME = megaphone

G++ = g++

O = -o

SRCS = megaphone.cpp

OBJ = $(SRCS:.cpp=.o)

GFLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(G++) $(GFLAG) $(SRCS) $(O) $(NAME)

.o : .cpp
	g++ -c $^ -o $@

fclean :
		rm -rf $(NAME) *.o

clean :
	*.o

re : fclean all

.PHONY : all fclean clean