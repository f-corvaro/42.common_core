# LIBFT [![fcorvaro's 42 Libft Score](https://badge42.vercel.app/api/v2/clftrr31n000608jvhnng5zld/project/3049229)](https://github.com/JaeSeoKim/badge42)


[![subject](https://img.shields.io/badge/subject-libft-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/libft/0.en.subject.pdf)

## Introduction
C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. The purpose of the project is to re-code some libc functions and other common utility functions to be reused in the subsequent 42 projects. In this project there is norminette and moulinette. All explanation are into the code as a comments.


## What's in it?

There are 4 sections:

1. **Libc Functions:** Some of the standard C functions;
2. **Additional Functions:** Functions that will be useful for other projects;
3. **Bonus Functions:** Functions that will be useful for linked list manipulation;
4. **Other:** makefile and libft.h.

**.c files:**
Where all the functions are written.

**.h - header:** Useful because insteade of doing `#include <library.h>`in all c files, you will write only once in your header. In advance you can reuse the function you did in your library for other functions in your library. For example in `ft_bzero.c` I use the `ft_memset.c`. Obviousbly you need to add `#include <libft.h>` at the top of all your files .c.

**makefile:**
Is a file where you compile your projects, instead of use an `int main` and `gcc` to compile, you will use this file. You have some commands to write in the console to compile (see below "Running Tests").




| Libc functions  | Additional functions | Bonus part |  other |
| ------------- | ------------- | ------------- |  ------------- |
| [ft_atoi](https://github.com/f-corvaro/42.common_core/blob/main/libft/ft_atoi.c)| Content Cell  | Content Cell  | [makefile](https://github.com/f-corvaro/42.common_core/blob/main/libft/Makefile)  |
| [ft_bzero](https://github.com/f-corvaro/42.common_core/blob/main/libft/ft_bzero.c) | Content Cell  | Content Cell  | [libft.h](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft.h) |
| [ft_calloc](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_calloc.c)  | Content Cell  | Content Cell  |
| [ft_isalnum](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_isalnum.c) | Content Cell  | Content Cell  |
| [ft_isalpha](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_isalpha.c)  | Content Cell  | Content Cell  |
| [ft_isascii](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_isascii.c)  | Content Cell  | Content Cell  |
| [ft_isdigit](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_isdigit.c)  | Content Cell  | Content Cell  |
| [ft_isprint](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_isprint.c)  | Content Cell  | Content Cell  |
| [ft_memchr](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_memchr.c)  | Content Cell  | Content Cell  |
| [ft_memcmp](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_memcmp.c)  | Content Cell  | Content Cell  |
| [ft_memcpy](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_memcpy.c) | Content Cell  | Content Cell  |
| [ft_memmove](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_memmove.c)  | Content Cell  | Content Cell  |
| [ft_memset](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_memset.c) | Content Cell  | Content Cell  |
| [ft_strchr](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_strchr.c)  | Content Cell  | Content Cell  |
| [ft_strdup](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_strdup.c)  | Content Cell  | Content Cell  |
| [ft_strlcat](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_strlcat.c)  | Content Cell  | Content Cell  |
| [ft_strlcpy](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_strlcpy.c)  | Content Cell  | Content Cell  |
| [ft_strlen](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_strlen.c)  | Content Cell  | Content Cell  |
| [ft_strncmp](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_strncmp.c)  | Content Cell  | Content Cell  |
| [ft_strnstr](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_strnstr.c)  | Content Cell  | Content Cell  |
| [ft_strrchr](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_strrstr.c)  | Content Cell  | Content Cell  |
| [ft_tolower](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_tolower.c)  | Content Cell  | Content Cell  |
| [ft_upper](https://github.com/f-corvaro/42.common_core/blob/main/Libft/ft_toupper.c)  | Content Cell  | Content Cell  |



## Running Tests

To run tests, run the following command

```bash
  make
```

```bash
  make re
```

```bash
  make clean
```

```bash
  make fclean
```

## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
