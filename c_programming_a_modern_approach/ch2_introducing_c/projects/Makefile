# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# List of source files
SOURCES = exercise1_checkmark.c exercise2_sphere_volume.c exercise3_sphere_volume2.c exercise4_tax.c exercise5_polynomial.c exercise6_polynomial2.c exercise7_minimum_bills.c exercise8_payment_calculator.c

# Extract the names of the executables from the source files
TARGETS = $(SOURCES:.c=)

# Default target: build all executables
all: $(TARGETS)

# Rule to build each executable
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# Clean up all generated files
clean:
	rm -f $(TARGETS)
