NAME = RPN

SRCS = main.cpp RPN.cpp

HEDERS =  RPN.hpp

CFAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:%.cpp= %.o)

RM = rm -rf

C++ = c++

all : $(NAME) $(HEDERS)

$(NAME) : $(OBJS)
	$(C++) $(CFLAGS) $(SRCS) -o $(NAME) -fsanitize=address -g

clean :
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY = all clean fclean re
