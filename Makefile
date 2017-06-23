CC=g++
CFLAGS=-Wall
OBJS = main.o gamecontrol.o table.o card.o
HEADERS=gamecontrol.h table.h card.h
TARGET=main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

$(OBJS): $(HEADERS)

.PHONY: clean

clean:
	$(RM) $(OBJS) $(TARGET)
