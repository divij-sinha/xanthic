CC = g++

all: finale

finale: finale.o Move.o Pokemon.o Trainer.o Gamer.o
	$(CC) -o finale finale.o Move.o Pokemon.o Trainer.o Gamer.o

finale.o: finale.cpp Move.h Pokemon.h Trainer.h Gamer.h
	$(CC) -c finale.cpp

Move.o: Move.cpp Move.h
	$(CC) -c Move.cpp -o Move.o

Pokemon.o: Pokemon.cpp Pokemon.h Move.h
	$(CC) -c Pokemon.cpp -o Pokemon.o

Trainer.o: Trainer.cpp Trainer.h Pokemon.h
	$(CC) -c Trainer.cpp -o Trainer.o

Player.o: Player.cpp Player.h Trainer.h
	$(CC) -c Trainer.cpp -o Trainer.o