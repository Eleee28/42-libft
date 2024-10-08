<p align="center">
  <img src="https://github.com/ayogun/42-project-badges/blob/main/badges/libftm.png" alt="libft badge"/>
</p>

<h1 align="center">
 42 Libft
</h1>

<!-- # Libft project -->

Statement of the project (in [Spanish](es.subject.pdf) / [English](en.subject.pdf))

## About the project

Libft is a project that consists on creating a library and replicating several funtions that belong to the Libc library. </br>

In addition, there is a bonus part that consists on creating functions to manipulate lists.

### Mandatory part

<b>Functions from libc:</b>
- [ft_isalpha](ft_isalpha.c) - test for alphabetical characters
- [ft_isdigit](ft_isdigit.c) - test for numeric characters
- [ft_isalnum](ft_isalnum.c) - test for alphanumeric characters
- [ft_isascii](ft_isascii.c) - test for ASCII characters
- [ft_isprint](ft_isprint.c) - test for printable characters
- [ft_strlen](ft_strlen.c) - compute the length of a string
- [ft_memset](ft_memset.c) - write a byte to a byte string
- [ft_bzero](ft_bzero.c) - write zeroes to a byte string
- [ft_memcpy](ft_memcpy.c) - copy memory area
- [ft_memmove](ft_memmove.c) - copy byte string
- [ft_strlcpy](ft_strlcpy.c) - size-bounded string copying
- [ft_strlcat](ft_strlcat.c) - size-bounded string concatenation
- [ft_toupper](ft_toupper.c) - lower case to upper case conversion
- [ft_tolower](ft_tolower.c) - upper case to lower case conversion
- [ft_strchr](ft_strchr.c) - locate a character in a string (first occurence)
- [ft_strrchr](ft_strrchr.c) - locate a character in a string (last occurence)
- [ft_strncmp](ft_strncmp.c) - compare strings (size-bounded)
- [ft_memchr](ft_memchr.c) - locate a byte in a byte string
- [ft_memcmp](ft_memcmp.c) - compare a byte string
- [ft_strnstr](ft_strnstr.c) - locate a substring in a string (size-bounded)
- [ft_atoi](ft_atoi.c) - converts a string to integer

Use `malloc` to implement:
- [ft_calloc](ft_calloc.c) - memory allocation
- [ft_strdup](ft_strdup.c) - duplicates a string

<b>Additional functions:</b>
- [ft_substr](ft_substr.c) - extracts a substring
- [ft_strjoin](ft_strjoin.c) - concatenates two strings
- [ft_strtrim](ft_strtrim.c) - trims a string
- [ft_split](ft_split.c) - divides a string using a character as separator
- [ft_itoa](ft_itoa.c) - convert an integer to string
- [ft_strmapi](ft_strmapi.c) - create new string from appying a function to a string
- [ft_striteri](ft_striteri.c) - apply a function on each character of a string
- [ft_putchar_fd](ft_putchar_fd.c) - output a character to file descriptor
- [ft_putstr_fd](ft_putstr_fd.c) - output a string to file descriptor
- [ft_putendl_fd](ft_putendl_fd.c) - output a string followed by endline to file descriptor
- [ft_putnbr_fd](ft_putnbr_fd.c) - output a number to file descriptor

### Bonus part
Includes functions to manipulate lists.

~~~~~
typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
~~~~~
[!NOTE](`content` is the data contained in the node (void * allows to store any kind of data)
`next` is the address of the next node (NULL if it is the last one))

- [ft_lstnew](ft_lstnew.c) - create a new node
- [ft_lstadd_front](ft_lstadd_front.c) - add a node at the beginning
- [ft_lstsize](ft_lstsize.c) - count the number of nodes
- [ft_lstlast](ft_lstlast.c) - return the last node
- [ft_lstadd_back](ft_lstadd_back.c) - add a node at the end
- [ft_lstdelone](ft_lstdelone.c) - free the content of the node
- [ft_lstclear](ft_lstclear.c) - delete the node and its successors
- [ft_lstiter](ft_lstiter.c) - iterate the list applying a function
- [ft_lstmap](ft_lstmap.c) - iterate the list applying a function to the content

## Project status

The project is finished, and marked with 125.
