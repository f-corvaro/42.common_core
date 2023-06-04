# <a href="https://github.com/f-corvaro/42.common_core/tree/main/exams"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/42Resources.png"></a>


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
