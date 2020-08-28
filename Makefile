OBJ:=$(patsubst *.c,*.o,$(wildcard *.c))
slist.exe:$(OBJ)
	gcc -o $@ $^
$(OBJ):
clean:
	rm *.o *.exe

 
                    
