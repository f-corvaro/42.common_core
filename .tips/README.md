# <a href="https://github.com/f-corvaro/42.common_core"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/42Resources.png"></a>

### Index

- [](#)
    - [Index](#index)
  - [The beginning](#the-beginning)
  - [Github utilities](#github-utilities)
  - [42 School](#42-school)
  - [42 Roma Luiss](#42-roma-luiss)
  - [Usefull commands for vim](#usefull-commands-for-vim)
  - [Support Me](#support-me)
  - [License](#license)


<br>

## The beginning

After you passed the C Piscine, you will start the 42 Common Core. You will have an email with a domain of your school. The school will give to you the priviledge of [github pro](https://education.github.com/pack). I suggest to download this web browser extension that will improve your intra page [improved intra](https://chrome.google.com/webstore/detail/improved-intra-42/hmflgigeigiejaogcgamkecmlibcpdgo). Other rewards claimable with 42 login:
[Lucidchart](https://www.lucidchart.com/pages/)
[Jet Brains](https://www.jetbrains.com/community/education/#students).

I suggest installing [oh-my-zsh](https://ohmyz.sh/#install) for your terminal.

## Github utilities

[Readme profile generator](https://gprm.itsvg.in/)

[Github profilinator](https://profilinator.rishav.dev/)

[Github profile readme generator](https://rahuldkjain.github.io/gh-profile-readme-generator/)

[Badge 42](https://github.com/JaeSeoKim/badge42)

[Badge 42](https://github.com/oakoudad/badge42)

[Skills Icons](https://skillicons.dev)

[Shields.io](https://shields.io/category/build)

## 42 School

[42 Evaluators](https://42evaluators.com/)

[42 Network](https://www.42network.org/42-schools/)

[42 Helpers](https://github.com/UmbertoSavoia/42helpers)

[Official NORMINETTE](https://github.com/42School/norminette)

## 42 Roma Luiss

[Man 42 Roma Luiss](https://42romawiki.notion.site/Rules-ca552d69f6f8418f849badfb47afba0b#accc0596676a460283dafbe3d012f2a7)

[moulinette](https://moulinette.42roma.it/)



## Usefull commands for vim

<p align="justify">

Vim is a usefull IDE that you use in the exams.

  - To creating a new file: eg. `vim filename.c`.

  - To write something: `:i`.

  - For save and quit: ':wq'.

  - For forcing quit: ':q!'.

  - To set the lines counter: `set number` or `set nu`.

  - To have highlight syntax colours: `:syntax on`.

  - Enable mouse click, + enable to copy paste without taking line number: `:set mouse=r` or `set mouse=a`.

  - To insert your header: `:Stdheader`.

```
  set tabstop=4     // set tab to 4 spaces
  set showmatch
  set colorcolumn=80
  set cursorline
  filetype plugin indent on
  set hidden			// mantiene il buffer anche dopo aver salvato
  set autoindent
  set tabstop=4    // set tab to 4 spaces

  set shiftwidth=4
  set expandtab

  nnoremap <F5> :!gcc -Wall -Wextra -Werror %:t -o %:r.out && ./%:r.out<enter>
  nmap <F6> :NERDTreeToggle<CR>

  inoremap " ""<left>
  inoremap ' ''<left>
  inoremap ( ()<left>
  inoremap [ []<left>
  inoremap { {}<left>
  inoremap {<CR> {<CR>}<ESC>O
  inoremap {;<CR> {<CR>};<ESC>O

  colorscheme codedark
```
</p>

<br>

## Support Me

<p align="justify">
I hope this guide helped you understand this project. Remember to ⭐ the repository.
If you want to support me:</p>

<p align="center">
<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg"><alt=""></a>
<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg"><alt=""></a>

<br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
