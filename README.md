# Libft &nbsp; ![C language](https://img.shields.io/badge/language-444444?style=flat-square&logo=c&labelColor=555555) ![makefile](https://img.shields.io/badge/makefile-444444?style=flat-square&logo=monster&logoColor=goldenrod&labelColor=555555) ![linux](https://img.shields.io/badge/linux-444444?style=flat-square&logo=linux&logoColor=black&labelColor=999999) ![terminal](https://img.shields.io/badge/terminal-444444?style=flat-square&logo=gnometerminal&logoColor=black&labelColor=bbbbbb)

*This project was created as part of the 42 curriculum by lbraga.*

>**Libft** is the first project in the 42 curriculum. The goal is to create the `libft.a` static library by reimplementing some functions from the standard C library (`libc`) and a few additional utility functions. This project focuses on understanding how these functions work under the hood, handling memory management, string manipulation, and linked lists in the bonus part.

## Libft Functions

* **Characters:** `isalpha` &nbsp;`isdigit` &nbsp;`isalnum` &nbsp;`isascii` &nbsp;`isprint` &nbsp;`toupper` &nbsp;`tolower`
* **Memory:** `memset` &nbsp;`bzero` &nbsp;`memcpy` &nbsp;`memmove` &nbsp;`memchr` &nbsp;`memcmp` &nbsp;`calloc`

* **Strings:** `strlen` &nbsp;`strlcpy` &nbsp;`strlcat` &nbsp;`strncmp` &nbsp;`strchr` &nbsp;`strrchr` &nbsp;`strnstr` &nbsp;`strdup` &nbsp;`ft_substr` &nbsp;`ft_strjoin` &nbsp;`ft_strtrim` &nbsp;`ft_split` &nbsp;`ft_strmapi` &nbsp;`ft_striteri`
* **Conversion:** `atoi` &nbsp;`ft_itoa`
* **File Descriptor:** `ft_putchar_fd` &nbsp;`ft_putstr_fd` &nbsp;`ft_putendl_fd` &nbsp;`ft_putnbr_fd`
* **Linked Lists (bonus):** `ft_lstnew` &nbsp;`ft_lstadd_front` &nbsp;`ft_lstsize` &nbsp;`ft_lstlast` &nbsp;`ft_lstadd_back` &nbsp;`ft_lstdelone` &nbsp;`ft_lstclear` &nbsp;`ft_lstiter` &nbsp;`ft_lstmap`

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

##  AI Usage Disclosure

> In compliance with the 42 curriculum requirements, I used AI tools, including the **CS50.ai Duck**, during the development of this project to support my learning. These tools were used to research and summarize technical articles about memory management, pointer arithmetic, recursion, and data structure iteration.
> The AI also helped with test development to identify potential logic bugs and edge cases during the implementation of complex functions, and supported the organization and formatting of project configuration files.

## Final Notes

> Developing Libft was a significant challenge that helped me understand the standard functions from scratch. This project gave me a foundation in pointer arithmetic for direct memory manipulation and in working with pointers to pointers. Ultimately, it was about building the skills needed to solve problems and create a reliable toolkit for future projects.

 *This is the end of the documentation. For a quick reference on how each function behaves, please refer to the List below.*

---

## Function List

| Libc Functions | Description |
| :--- | :--- |
| `isalpha` | Checks for an alphabetic character. |
| `isdigit` | Checks for a digit (0 through 9). |
| `isalnum` | Checks for an alphanumeric character. |
| `isascii` | Checks whether `c` fits into the ASCII character set. |
| `isprint` | Checks for any printable character. |
| `strlen` | Calculates the length of a string. |
| `memset` | Fills memory with a constant byte. |
| `bzero` | Erases the data in `n` bytes of memory. |
| `memcpy` | Copies memory area. |
| `memmove` | Copies memory area (handles overlapping). |
| `strlcpy` | Size-bounded string copying. |
| `strlcat` | Size-bounded string concatenation. |
| `toupper` | Converts a lowercase letter to uppercase. |
| `tolower` | Converts an uppercase letter to lowercase. |
| `strchr` | Locates a character in a string. |
| `strrchr` | Locates a character in a string, searching from the end. |
| `strncmp` | Compares two strings up to `n` characters. |
| `memchr` | Scans memory for a character. |
| `memcmp` | Compares memory areas. |
| `strnstr` | Locates a substring in a string, searching up to `n` characters. |
| `atoi` | Converts a string to an integer. |
| `calloc` | Allocates memory and initializes it to zero. |
| `strdup` | Creates a duplicate of a string using `malloc`. |

| Additional Functions | Description |
| :--- | :--- |
| `ft_substr` | Returns a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a new one. |
| `ft_strtrim` | Trims specific characters from the start and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character of a string to create a new one. |
| `ft_striteri` | Applies a function to each character of a string by its index. |
| `ft_putchar_fd` | Outputs a character to a specific file descriptor. |
| `ft_putstr_fd` | Outputs a string to a specific file descriptor. |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Outputs an integer to a specific file descriptor. |

| Bonus Linked Lists Functions | Description |
| :--- | :--- |
| `ft_lstnew` | Creates a new list element. |
| `ft_lstadd_front` | Adds an element to the beginning of a list. |
| `ft_lstsize` | Counts the number of elements in a list. |
| `ft_lstlast` | Returns the last element of a list. |
| `ft_lstadd_back` | Adds an element to the end of a list. |
| `ft_lstdelone` | Deletes one element from a list using a given function. |
| `ft_lstclear` | Deletes and frees an entire list. |
| `ft_lstiter` | Iterates through a list and applies a function to each element. |
| `ft_lstmap` | Iterates through a list and applies a function to create a new list. |