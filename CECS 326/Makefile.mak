CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11
TARGET  = minishell
SRC     = minishell.c
 
.PHONY: all clean
 
all: $(TARGET)
 
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
 
clean:
	rm -f $(TARGET)
 