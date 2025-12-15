*This project has been created as part of the 42 curriculum by limelo-c.*

# Born2beRoot

---

## Description

This project is a project at 42 teaches us how to create our first machine in VirtualBox. 

The 

**Goal:** Being able to set up our own operating system while implementing strict rules.
**Overview:** Using an operating system such as `Debian` in my specific project, the set up was done without using any graphical interface. Multiple encrypted partitions using LVM were created, sudo was configured, creating a user, a group and adding a user to a group. SSH configuration, changing ports and disabling root login via SSH. Installing and configuring UFW package, enabling a firewall. 

---

## Instructions

This project consists of the VirtualMachine setup and a `signature.txt`, consisting of the 

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
