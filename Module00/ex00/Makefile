CC = clang++
ODIR = ./obj
PROG = megaphone
CXXFLAGS = -Wall -Wextra -Werror

OBJS = $(ODIR)/megaphone.o 
$(PROG) : $(ODIR) $(OBJS)
	$(CC) -o $@ $(OBJS) $(CXXFLAGS)

$(ODIR)/megaphone.o : ./megaphone.cpp 
	$(CC) -c ./megaphone.cpp -o $@ $(CXXFLAGS)

$(ODIR) :
	if [ ! -d $(ODIR) ]; then mkdir $(ODIR); fi

.PHONY : clean
clean :
	if [ -d $(ODIR) ]; then rm $(ODIR) -r; fi
	if [ -f $(PROG) ]; then rm $(PROG); fi

