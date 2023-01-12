OBJECTS = main.o graphics.o
CFLAGS = -lSDL2

compileNrun:$(OBJECTS)
	g++ -o game $(OBJECTS) $(CFLAGS)

clean:
	@rm $(OBJECTS) game