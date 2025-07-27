# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -g

# Source files
SRCS = main.c menu.c option_selector.c calc1_addition.c calc2_subtraction.c write_file.c read_file.c
OBJS = $(SRCS:.c=.o)

# Executable
TARGET = calculator_app

# Default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Clean up compiled objects
clean:
	rm -f $(OBJS) $(TARGET)
