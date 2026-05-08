# Libft &nbsp;![language](https://img.shields.io/badge/language-444444?style=flat-square&logo=c&labelColor=555555) ![makefile](https://img.shields.io/badge/makefile-444444?style=flat-square&logo=monster&logoColor=goldenrod&labelColor=555555)

*This project was created as part of the 42 curriculum by lbraga.*

**Libft** is the first project in the 42 curriculum. The goal is to create the `libft.a` static library by reimplementing some functions from the standard C library and a few additional utility functions. This project focuses on understanding how these functions work under the hood, handling memory management, string manipulation, and linked lists in the bonus part.

1. [Libft Functions](#Libft-Functions)
2. [Instructions](#Instructions)
3. [Resources](#Resources)
4. [AI Disclosure](#AI-Disclosure)
5. [Final Notes](#Final-Notes)
6. [Function List](#Function-List)

## Libft Functions

* **Characters:** `isalpha` `isdigit` `isalnum` `isascii` `isprint` `toupper` `tolower`
* **Memory:** `memset` `bzero` `memcpy` `memmove` `memchr` `memcmp` `calloc`
* **Strings:** `strlen` `strlcpy` `strlcat` `strncmp` `strchr` `strrchr` `strnstr` `strdup` `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_strmapi` `ft_striteri`
* **Conversion:** `atoi` `ft_itoa`
* **File Descriptor:** `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`
* **Linked Lists (bonus):** `ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast` `ft_lstadd_back` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

## Instructions

To compile the library, you must have the cc compiler and the make tool installed.

1.	**Clone the repository:**
	```
	git clone git@github.com:leandrobbj/libft.git && cd libft
	```

2.	**Create the library:**
	```
	make
	```

### Other commands:

* `make bonus`: Creates the library including the bonus functions.
* `make clean`: Removes the object files (`.o`).
* `make fclean`: Removes the object files and the compiled library (`libft.a`).
* `make re`: Performs a `fclean` followed by a `make`.

## Resources

* [CS50: Introduction to Computer Science](https://pll.harvard.edu/course/cs50-introduction-computer-science) - Harvard University's lectures on C programming, memory management, and algorithms.
* [Linux Programmer's Manual (man pages)](https://man7.org/linux/man-pages/) - Useful for understanding the behavior of `libc` functions.
* [Norminette Documentation](https://github.com/42School/norminette) - Helpful for ensuring the code follows the school's coding standards.

##  AI Disclosure

In compliance with the 42 curriculum requirements, I used AI tools, including the **CS50.ai Duck**, during the development of this project to support my learning. These tools were used to research and summarize technical articles about memory management, pointer arithmetic, recursion, and data structure iteration.

The AI also helped with test development to identify potential logic bugs and edge cases during the implementation of complex functions, and supported the organization and formatting of project configuration files.

## Final Notes

Developing Libft was a significant challenge that helped me understand the standard functions from scratch. This project gave me a foundation in pointer arithmetic for direct memory manipulation and in working with pointers to pointers. Ultimately, it was about building the skills needed to solve problems and create a reliable toolkit for future projects.

 *This is the end of the documentation. For a quick reference on how each function behaves, please refer to the List below.*

___

### Function List

| Libc Functions | Description |
| :--- | :--- |
| [`isalpha`](src/ft_isalpha.c) | Checks for an alphabetic character. |
| [`isdigit`](src/ft_isdigit.c) | Checks for a digit (0 through 9). |
| [`isalnum`](src/ft_isalnum.c) | Checks for an alphanumeric character. |
| [`isascii`](src/ft_isascii.c) | Checks whether `c` fits into the ASCII character set. |
| [`isprint`](src/ft_isprint.c) | Checks for any printable character. |
| [`strlen`](src/ft_strlen.c) | Calculates the length of a string. |
| [`memset`](src/ft_memset.c) | Fills memory with a constant byte. |
| [`bzero`](src/ft_bzero.c) | Erases the data in `n` bytes of memory. |
| [`memcpy`](src/ft_memcpy.c) | Copies memory area. |
| [`memmove`](src/ft_memmove.c) | Copies memory area (handles overlapping). |
| [`strlcpy`](src/ft_strlcpy.c) | Size-bounded string copying. |
| [`strlcat`](src/ft_strlcat.c) | Size-bounded string concatenation. |
| [`toupper`](src/ft_toupper.c) | Converts a lowercase letter to uppercase. |
| [`tolower`](src/ft_tolower.c) | Converts an uppercase letter to lowercase. |
| [`strchr`](src/ft_strchr.c) | Locates a character in a string. |
| [`strrchr`](src/ft_strrchr.c) | Locates a character in a string, searching from the end. |
| [`strncmp`](src/ft_strncmp.c) | Compares two strings up to `n` characters. |
| [`memchr`](src/ft_memchr.c) | Scans memory for a character. |
| [`memcmp`](src/ft_memcmp.c) | Compares memory areas. |
| [`strnstr`](src/ft_strnstr.c) | Locates a substring in a string, searching up to `n` characters. |
| [`atoi`](src/ft_atoi.c) | Converts a string to an integer. |
| [`calloc`](src/ft_calloc.c) | Allocates memory and initializes it to zero. |
| [`strdup`](src/ft_strdup.c) | Creates a duplicate of a string using `malloc`. |

| Additional Functions | Description |
| :--- | :--- |
| [`ft_substr`](src/ft_substr.c) | Returns a substring from a string. |
| [`ft_strjoin`](src/ft_strjoin.c) | Concatenates two strings into a new one. |
| [`ft_strtrim`](src/ft_strtrim.c) | Trims specific characters from the start and end of a string. |
| [`ft_split`](src/ft_split.c) | Splits a string into an array of strings using a delimiter. |
| [`ft_itoa`](src/ft_itoa.c) | Converts an integer to a string. |
| [`ft_strmapi`](src/ft_strmapi.c) | Applies a function to each character of a string to create a new one. |
| [`ft_striteri`](src/ft_striteri.c) | Applies a function to each character of a string by its index. |
| [`ft_putchar_fd`](src/ft_putchar_fd.c) | Outputs a character to a specific file descriptor. |
| [`ft_putstr_fd`](src/ft_putstr_fd.c) | Outputs a string to a specific file descriptor. |
| [`ft_putendl_fd`](src/ft_putendl_fd.c) | Outputs a string followed by a newline to a file descriptor. |
| [`ft_putnbr_fd`](src/ft_putnbr_fd.c) | Outputs an integer to a specific file descriptor. |

| Bonus Linked Lists Functions | Description |
| :--- | :--- |
| [`ft_lstnew`](src/ft_lstnew.c) | Creates a new list element. |
| [`ft_lstadd_front`](src/ft_lstadd_front.c) | Adds an element to the beginning of a list. |
| [`ft_lstsize`](src/ft_lstsize.c) | Counts the number of elements in a list. |
| [`ft_lstlast`](src/ft_lstlast.c) | Returns the last element of a list. |
| [`ft_lstadd_back`](src/ft_lstadd_back.c) | Adds an element to the end of a list. |
| [`ft_lstdelone`](src/ft_lstdelone.c) | Deletes one element from a list using a given function. |
| [`ft_lstclear`](src/ft_lstclear.c) | Deletes and frees an entire list. |
| [`ft_lstiter`](src/ft_lstiter.c) | Iterates through a list and applies a function to each element. |
| [`ft_lstmap`](src/ft_lstmap.c) | Iterates through a list and applies a function to create a new list. |
