COMPILEFLAGS=
CCOMP=gcc

main: main.o egg.o max.o
	$(CCOMP) $(COMPILEFLAGS) -o eggtest main.o egg.o max.o
main.o: main.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c main.c
egg.o: egg.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c egg.c
max.o: max.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c max.c
clean:
	rm main.o egg.o max.o eggtest
