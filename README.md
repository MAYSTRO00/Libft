*This project has been created as part of the 42 curriculum by mohadj-a.*

# Libft

A personal C library developed as part of the **42 curriculum**. This project recreates a selection of standard C library functions and adds utilities for strings, file descriptors, and singly linked lists.

The goal is to build a reusable library while strengthening the understanding of pointers, memory allocation, data structures, and C programming fundamentals.

## Features

The library contains **43 functions**, organized into three mandatory parts.

### Part 1 — Libc Functions

| Category | Functions |
| --- | --- |
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi`, `ft_toupper`, `ft_tolower` |

### Part 2 — Additional Functions

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 — Linked List Functions

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

In this version of the project, linked list functions are **mandatory**, not bonus.

## Instructions

### Build

The project produces a static library named `libft.a`.

| Command | Description |
| --- | --- |
| `make` | Build the complete library |
| `make all` | Build `libft.a` |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and `libft.a` |
| `make re` | Rebuild the library |

### Usage

Include `libft.h` in your C program, then link the library when compiling:

`cc -Wall -Wextra -Werror main.c -L. -lft -o program`

The `main.c` file represents your own application or test file and is not part of the library.

## Testing

The project can be checked using:

- **Norminette** — To verify compliance with the 42 coding standard.
- **Francinette** — To test function behavior and edge cases.
- **Valgrind** — To detect memory leaks and invalid memory access.
- **Manual tests** — To verify individual functions and their expected behavior.

## What I Learned

- Working with pointers and pointer arithmetic
- Understanding memory allocation and memory management
- Manipulating strings and memory buffers
- Using function pointers and callbacks
- Building and traversing singly linked lists
- Creating and linking a static C library
- Understanding undefined behavior and edge cases
- Writing code that follows the 42 Norm

## Resources

- **42 Libft Subject** — Official project requirements and specifications.
- **Linux Manual Pages** — Documentation for standard C functions.
- **cppreference** — https://en.cppreference.com/w/c
- **GNU C Library Manual** — https://www.gnu.org/software/libc/manual/

### AI Usage

AI was used as a learning assistant throughout the project, mainly for:

- Understanding pointers, memory management, and linked lists.
- Clarifying function behavior and C programming concepts.
- Reviewing implementation logic and identifying potential errors.
- Understanding compiler and Norminette errors.
- Assisting with README documentation.

The library functions were implemented and revised manually.

## Author

**mohadj-a** — 42 Belgium
