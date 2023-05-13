# <img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/02.png">

## Exam details
<p align="justify"> 
This exam has 2 random questions picked from each level below.

### Level 1:

```
- inter
- union
```
### Level 2:
```
- Ft_Printf
- Get_Next_Line
```
There isn't norminette and you must use vim for this exam. The success of this exam doesn't give to you additional days for blackhole.
</p>

## Exam Login Details

<p align="justify">

### 1. Login with the following:

```
login -> exam
password -> exam
```

### 2. In the terminal type:

```
examshell
```

### 3. Login with your 42 intra account

```
login -> your 42 intra username (eg. fcorvaro)
pasword -> your password
```
### 4. Allow photo check

### 5. Access Rendu typing:

```
'y' 
```

### 6. In the Exam Shell, you have 3 commands:

```
- 'status' - check the time and other things
- 'grademe' - checking pushed exercise (moulinet)
- 'finish' - closing examshell and finish exam
```
### 7. Open a new terminal:

```
- You can find your exam subject in the directory subject
- Then you can see directory Rendu. It is your repository.
- You must create a folder named by the project and start working in that folder.
```
### 8. Submit your project:
  
When you are ready to sumbit your work, go into Rendu and push the folder you created by doing the following:

```
'git add <folder name/files in folder>'
```

```
'git status'
```
```
'git commit -m "any commit message you like in these strings"'
```
```
'git push'
```
After you git push, type ```grademe``` in the examshell for your project to be evaluated.

</p>

## Exam skill required:
<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,c,vim" />
  </a>
</p>

## Usefull tips for vim
```
<p align="justify">
set number
set showmatch
set mouse=a
set colorcolumn=80
set cursorline
syntax on
filetype plugin indent on
set hidden			"mantiene il buffer anche dopo aver salvato
set autoindent
set tabstop=4
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
