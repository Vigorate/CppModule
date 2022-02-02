CC = g++
ODIR = obj
PROG = PhoneBook
CXXFLAGS = -Wall -Wextra -std=c++11

OBJS = $(ODIR)/Contact.o $(ODIR)/PhoneBook.o $(ODIR)/main.o 
$(PROG) : $(ODIR) $(OBJS)
	$(CC) -o $@ $(OBJS) $(CXXFLAGS)

$(ODIR)/Contact.o : ./Contact.cpp ./Contact.hpp 
	$(CC) -c ./Contact.cpp -o $@ $(CXXFLAGS)

$(ODIR)/PhoneBook.o : ./PhoneBook.cpp ./PhoneBook.hpp ./Contact.hpp 
	$(CC) -c ./PhoneBook.cpp -o $@ $(CXXFLAGS)

$(ODIR)/main.o : ./main.cpp ./PhoneBook.hpp ./Contact.hpp 
	$(CC) -c ./main.cpp -o $@ $(CXXFLAGS)

$(ODIR) :
	if [ ! -d $(ODIR) ]; then mkdir $(ODIR); fi

.PHONY : clean
clean :
	if [ -d $(ODIR) ]; then rm $(ODIR) -r; fi
	if [ -f $(PROG) ]; then rm $(PROG); fi

