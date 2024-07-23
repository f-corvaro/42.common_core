# <a href="https://github.com/f-corvaro/42.common_core"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/42Resources.png"></a>

<p align="center" style="text-decoration: none;">
  <a href="https://github.com/f-corvaro/42.common_core/tree/main/.tips"><img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/f-corvaro/42.common_core?color=black" /></a>
</p>

<h3 align="center">Index</h3>

<p align="center">
  <a href="#post-piscine-resources-and-recommendations">Post-Piscine Resources and Recommendations</a><br>
  <a href="#github-profile-tools">GitHub Profile Tools</a><br>
  <a href="#42-school-resources">42 School Resources</a><br>
  <a href="#42-roma-luiss-specific-resources">42 Roma Luiss Specific Resources</a><br>
  <a href="#useful-vim-commands-and-configuration">Useful Vim Commands and Configuration</a><br>
  <a href="#basic-commands">Basic Commands</a><br>
  <a href="#configuration-settings">Configuration Settings</a><br>
  <a href="#support-me">Support Me</a><br>
  <a href="#author">Author</a><br>
</p>

## Post-Piscine Resources and Recommendations

<p align="justify">

After passing the C Piscine, you will begin the 42 Common Core. You will receive an email with your school's domain. The school will grant you access to [GitHub Pro](https://education.github.com/pack). 

I recommend downloading this web browser extension to enhance your intra page experience: [Improved Intra](https://chrome.google.com/webstore/detail/improved-intra-42/hmflgigeigiejaogcgamkecmlibcpdgo).

Other rewards claimable with your 42 login:
- [Lucidchart](https://www.lucidchart.com/pages/)
- [JetBrains](https://www.jetbrains.com/community/education/#students)

</p>
<br>

## GitHub Profile Tools

[Readme profile generator](https://gprm.itsvg.in/)

[Github profilinator](https://profilinator.rishav.dev/)

[Github profile readme generator](https://rahuldkjain.github.io/gh-profile-readme-generator/)

[Badge 42](https://github.com/JaeSeoKim/badge42)

[Badge 42](https://github.com/oakoudad/badge42)

[Skills Icons](https://skillicons.dev)

[Shields.io](https://shields.io/)

## 42 School Resources

[42 Evaluators](https://42evaluators.com/)

[42 Network](https://www.42network.org/42-schools/)

[42 Helpers](https://github.com/UmbertoSavoia/42helpers)

[Official NORMINETTE](https://github.com/42School/norminette)

## 42 Roma Luiss Specific Resources

[Man 42 Roma Luiss](https://42romawiki.notion.site/Rules-ca552d69f6f8418f849badfb47afba0b#accc0596676a460283dafbe3d012f2a7)

[moulinette](https://moulinette.42roma.it/)


## Useful Vim Commands and Configuration

<p align="justify">

Vim is a powerful IDE that you can use during exams.

### Basic Commands

- To create a new file: `vim filename.c`
- To enter insert mode: `:i`
- To save and quit: `:wq`
- To force quit without saving: `:q!`
- To enable line numbers: `:set number` or `:set nu`
- To enable syntax highlighting: `:syntax on`
- To enable mouse support and copy-paste without line numbers: `:set mouse=r` or `:set mouse=a`
- To insert your header: `:Stdheader`

### Configuration Settings

```vim
set tabstop=4          " Set tab to 4 spaces
set showmatch          " Highlight matching brackets
set colorcolumn=80     " Highlight the 80th column
set cursorline         " Highlight the current line
filetype plugin indent on
set hidden             " Keep buffers hidden after saving
set autoindent         " Enable automatic indentation
set shiftwidth=4       " Set indentation width to 4 spaces
set expandtab          " Convert tabs to spaces

" Key mappings
nnoremap <F5> :!gcc -Wall -Wextra -Werror %:t -o %:r.out && ./%:r.out<CR>
nmap <F6> :NERDTreeToggle<CR>

" Auto-pairing for brackets and quotes
inoremap " ""<left>
inoremap ' ''<left>
inoremap ( ()<left>
inoremap [ []<left>
inoremap { {}<left>
inoremap {<CR> {<CR>}<ESC>O
inoremap {;<CR> {<CR>};<ESC>O

" Color scheme
colorscheme codedark
```

</p>
<br>

## Support Me

<p align="justify">
If you find this repository helpful, please consider starring it. Your support is greatly appreciated!</p>

<p align="center">
<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg"><alt=""></a>
<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg"><alt=""></a>

<br>

## Author

<p align="center"><a href="https://profile.intra.42.fr/users/fcorvaro"><img style="height:auto;" src="https://avatars.githubusercontent.com/u/102758065?v=4" width="100" height="100"alt=""></a>
<p align="center">
<a href="mailto:fcorvaro@student.42roma.it"><kbd>Email</kbd><alt=""></a>
<a href="https://github.com/f-corvaro"><kbd>Github</kbd><alt=""></a>
<a href="https://www.linkedin.com/in/f-corvaro/"><kbd>Linkedin</kbd><alt=""></a>
<a href="https://42born2code.slack.com/team/U050L8XAFLK"><kbd>Slack</kbd><alt=""></a>

<hr/>
