OBJ = $(SRCS:.c=.o)

all :
	g++ megaphone.cpp -o megaphone

%.c : %.o
	gcc $^ -o $@