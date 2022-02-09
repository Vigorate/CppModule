CC = g++
ODIR = obj
PROG = karen
CXXFLAGS = -Wall -Wextra -std=c++98

OBJS = $(ODIR)/Karen.o $(ODIR)/main.o 
$(PROG) : $(ODIR) $(OBJS)
	$(CC) -o $@ $(OBJS) $(CXXFLAGS)

$(ODIR)/Karen.o : ./Karen.cpp ./Karen.hpp 
	$(CC) -c ./Karen.cpp -o $@ $(CXXFLAGS)

$(ODIR)/main.o : ./main.c ./Karen.hpp 
	$(CC) -c ./main.c -o $@ $(CXXFLAGS)

$(ODIR) :
	if [ ! -d $(ODIR) ]; then mkdir $(ODIR); fi

.PHONY : clean
clean :
	if [ -d $(ODIR) ]; then rm $(ODIR) -r; fi
	if [ -f $(PROG) ]; then rm $(PROG); fi

