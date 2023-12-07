NAME = a.out

CC = c++

CFLAG =  -std=c++98 -Wall -Werror -Wextra -g

SRCS =	main.cpp\
		Fixed.cpp

OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)
	

$(NAME): $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@echo clean $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@echo clean $(NAME)

debug:
	c++ -std=c++98 -Wall -Werror -Wextra -g main.cpp Fixed.cpp -D DEBUG=1

re: fclean all

.PHONY: all 
