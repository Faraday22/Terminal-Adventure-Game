CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRC = minigame.c

.PHONY: all clean

all: Terminal-Adventure-Game

Terminal-Adventure-Game: $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f Terminal-Adventure-Game
