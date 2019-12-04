CC = g++

CFLAGS = -g -Wall

LFLAGS =

TARGET = binaryTreeTraversals

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)

