CC=g++
CFLAGS=-g -Wall -o
TARGETS=main

all:${TARGETS}

main:main.cpp
	${CC} $^ ${CFLAGS} $@

.PHONY:clean
clean:
	rm ${TARGETS}
