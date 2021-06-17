SRC:=$(wildcard *.c)
OBJS:= $(patsubst *.c, *.o, $(SRC))

steganography: $(OBJS)
	gcc -o $@ $^
	

$(OBJS):

clean:
	rm *.o *.exe

