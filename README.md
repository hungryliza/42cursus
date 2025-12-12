*This project has been created as part of the 42 curriculum by limelo-c.*

# Get Next Line

---

## Description

This project is a project at 42 that requires the implementation of a function capable to implement a function that reads a file one line at a time, handling edge cases like buffer size mismatches. The function must return each line as a string, terminated by a newline character or the end-of-file (EOF). The main challenge lies in efficiently managing data between function calls, particularly when the buffer size doesn't match the exact length of a line. A static buffer will store partially read data between calls.


The main function, which is `char *get_next_line(int fd)`, takes a file descriptor (`fd`) as an argument and returns the next line read from that file.

**Goal:** Read a line from a file descriptor, terminated by a newline character (`\n`) or the end-of-file (EOF), and return it as a string.
**Overview:** The implementation uses a static local variable (buff in the provided code) to store data read from the file descriptor that belongs to the next line. This ensures that the function can correctly resume reading where it left off on subsequent calls for the same file descriptor.

---

## Instructions

This project consists of a core function (get_next_line) and necessary utility functions (`ft_strlen`, `ft_strjoin`, `ft_strchr` and `buffer_move`).

### Compilation

You can compile the project files (`get_next_line.c`, `get_next_line_utils.c`, and `get_next_line.h`) using the CC compiler.

Assuming your main function is inside the `get_next_line.c` and you define `BUFFER_SIZE` in the header or through the compiler flag:

# Compile with a BUFFER_SIZE of 42, for example
`cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o (name you can give to the executable)`

Or incase only the c files are in the folder, you can do simply a wildcard of all .c files:
`cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c`

# Execution

To test the function, you need a file to allow the executable to read the line from that file descriptor, to either terminate by a newline if after the newline there is a null terminator(`\0`), or either not have a newline(`\n`) and return the string in the file descriptor or rare cases just EOF and return nothing or the line depending on the case.

Run the executable (for linux systems):
`./(name of executable, naturally is given a.out if there is not give a name)`

In case you want to test with Valgrind since there is usage of memory allocation in the project, it is recommend to use:
`valgrind --leak-check=full --show-leak-kinds=all ./(name of executable)`

---

## Resources

# References

The linux pages:
	- man 2 read
	- man 3 malloc
	
Peer help:
	- Peer-to-peer
	
Internet sources:
	- Wikipedia: https://en.wikipedia.org/wiki/C_dynamic_memory_allocation
	- Wikipedia: https://en.wikipedia.org/wiki/Static_variable
	
AI usage:
	- No usage.
