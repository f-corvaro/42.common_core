# **LIBFT**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/00-libft"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/libft.png">

[![subject](https://img.shields.io/badge/subject-libft-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/en.subject.pdf)

### Index

- [**LIBFT**](#libft)
    - [Index](#index)
  - [0 - About](#0---about)
  - [1 - Folder Structure](#1---folder-structure)
  - [2 - What's in it?](#2---whats-in-it)
  - [3 - Functions Index](#3---functions-index)
  - [4 - Running Tests](#4---running-tests)
  - [5 - Evaluation](#5---evaluation)
    - [5.1 - Tester](#51---tester)
    - [5.2 - Correction Sheet](#52---correction-sheet)
    - [5.3 - My Moulinette Results](#53---my-moulinette-results)
  - [6 - Special Thanks](#6---special-thanks)
  - [Support Me](#support-me)
  - [Skills developed](#skills-developed)
  - [License](#license)


<br>

## 0 - About
<p align="justify">
The journey in 42 Schools starts from here, this is the first project you face it. The purpose of the project is to re-code some libc functions and other common utility functions and include in an archive library, that it will be very helpful for the future projects. In this project there is norminette and Moulinette, so you will be checked from peers and Moulinette.

You can find my complete static C library [here](https://github.com/f-corvaro/my_static_C_library).

</p>
<br>

## 1 - Folder Structure

```
.
├── 00-libft
│   ├── libft
│   │   ├── ft_atoi.c
│   │   ├── ft_bzero.c
│   │   ├── ft_calloc.c
│   │   ├── ft_isalnum.c
│   │   ├── ft_isalpha.c
│   │   ├── ft_isascii.c
│   │   ├── ft_isdigit.c
│   │   ├── ft_isprint.c
│   │   ├── ft_itoa.c
│   │   ├── ft_lstadd_back.c
│   │   ├── ft_lstadd_front.c
│   │   ├── ft_lstclear.c
│   │   ├── ft_lstdelone.c
│   │   ├── ft_lstiter.c
│   │   ├── ft_lstlast.c
│   │   ├── ft_lstmap.c
│   │   ├── ft_lstnew.c
│   │   ├── ft_lstsize.c
│   │   ├── ft_memchr.c
│   │   ├── ft_memcmp.c
│   │   ├── ft_memcpy.c
│   │   ├── ft_memmove.c
│   │   ├── ft_memset.c
│   │   ├── ft_putchar_fd.c
│   │   ├── ft_putendl_fd.c
│   │   ├── ft_putnbr_fd.c
│   │   ├── ft_putstr_fd.c
│   │   ├── ft_split.c
│   │   ├── ft_strchr.c
│   │   ├── ft_strdup.c
│   │   ├── ft_striteri.c
│   │   ├── ft_strjoin.c
│   │   ├── ft_strlcat.c
│   │   ├── ft_strlcpy.c
│   │   ├── ft_strlen.c
│   │   ├── ft_strmapi.c
│   │   ├── ft_strncmp.c
│   │   ├── ft_strnstr.c
│   │   ├── ft_strrchr.c
│   │   ├── ft_strtrim.c
│   │   ├── ft_substr.c
│   │   ├── ft_tolower.c
│   │   ├── ft_toupper.c
│   │   ├── libft.h
│   │   └── Makefile
```


## 2 - What's in it?

There are 4 sections:

1. **Libc Functions:** <p align="justify"> Some of the standard C functions;</p>
2. **Additional Functions:** <p align="justify">Functions that will be useful for other projects;</p>
3. **Bonus Functions:** <p align="justify">Functions that will be useful for linked list manipulation;</p>
4. **Other:** <p align="justify"> makefile and libft.h.</p>

After the compiling, you will have also .o files and the libft.a file.

<br>

## 3 - Functions Index

<p align="center">


| Libc functions  | Additional functions | Bonus part |  other |
| ------------- | ------------- | ------------- |  ------------- |
| [ft_atoi.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_atoi.c)| [ft_itoa.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_itoa.c)  | [ft_lstadd_back.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstadd_back.c)  | [libft.h](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/libft.h) |
| [ft_bzero.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_bzero.c) | [ft_putchar_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_putchar_fd.c)  | [ft_lstadd_front.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstadd_front.c)  | [makefile](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/Makefile)  |
| [ft_calloc.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_calloc.c)  | [ft_putendl_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_putendl_fd.c)  | [ft_lstclear.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstclear.c)  |
| [ft_isalnum.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isalnum.c) | [ft_putnbr_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_putnbr_fd.c)  | [ft_lstdelone.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstdelone.c)  |
| [ft_isalpha.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isalpha.c)  | [ft_putstr_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_putstr_fd.c)  | [ft_lstiter.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstiter.c)  |
| [ft_isascii.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isascii.c)  | [ft_split.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_split.c)  | [ft_lstlast.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstlast.c)  |
| [ft_isdigit.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isdigit.c)  | [ft_striteri.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_striteri.c)  | [ft_lstmap.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstmap.c)  |
| [ft_isprint.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isprint.c)  | [ft_strjoin.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strjoin.c)  | [ft_lstnew.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstnew.c)  |
| [ft_memchr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memchr.c)  | [ft_strmapi.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strmapi.c)  | [ft_lstsize.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstsize.c)  |
| [ft_memcmp.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memcmp.c)  | [ft_strtrim.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strtrim.c)  |
| [ft_memcpy.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memcpy.c) | [ft_substr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_substr.c)  |
| [ft_memmove.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memmove.c)  |
| [ft_memset.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memset.c) |
| [ft_strchr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strchr.c)  |
| [ft_strdup.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strdup.c)  |
| [ft_strlcat.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strlcat.c)  |
| [ft_strlcpy.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strlcpy.c)  |
| [ft_strlen.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strlen.c)  |
| [ft_strncmp.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strncmp.c)  |
| [ft_strnstr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strnstr.c)  |
| [ft_strrchr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strrchr.c)  |
| [ft_tolower.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_tolower.c)  |
| [ft_toupper.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_toupper.c)  |

</p>
<br>

## 4 - Running Tests

<p align="justify">

To build the library use the ```make``` command. To get an overview of all make commands run:

```bash
make info
```

 <a href="https://github.com/f-corvaro/42.common_core/tree/main/00-libft"><img align="center" alt="running test" width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/make.gif">

</p>
<br>

## 5 - Evaluation

### 5.1 - Tester

<p align="justify"> To test my project before the Moulinette and peers corrections, use the: </p>

[Supreme Tester](https://github.com/FranFrau/Supreme-Tester-Libft) of [@FranFrau]( https://github.com/FranFrau )

### 5.2 - Correction Sheet

<a href="https://github.com/f-corvaro/42.common_core/tree/main/00-libft"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/libft_cs.png">

### 5.3 - My Moulinette Results

 <a href="https://projects.intra.42.fr/projects/42cursus-libft/projects_users/3049229">
  <img align="center" img src="https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/moulinette_libft.png">
 </a>
</p>
<br>

## 6 - Special Thanks

[@dieremy]( https://github.com/dieremy ) <p align="justify">  helped me to test and resolve leaks in my functions. Furthermore, he introduced to me this project: explaining to me some functions and some theory about it. </p>
[@MirkokriM]( https://github.com/MirkokriM ) <p align="justify"> for the gif idea.</p>
<br>

## Support Me

<p align="justify">
Remember to ⭐ the repository.
If you want to support me:</p>

<p align="center">
<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg"><alt=""></a>
<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg"><alt=""></a>

<br>

## Skills developed

<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,c,vim,vscode" />
  </a>
</p><br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
