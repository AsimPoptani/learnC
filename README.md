# Learn C
This is a cheat cheat for moi but if you or anyone else finds this useful then thats a bonus :)

## A few things / Disclaimer 
This is not going to be complete and definite cheat cheat sheet (yes that was double cheaty). But it should be close enough :) 

### Oh Yeah 
I will get things wrong so please shout and kick and do a PR.

## C compilers
Here you should not run into any issues, but I thought I should have a quick investigation of compilers. Turns out there are allot ...
See here https://en.wikipedia.org/wiki/List_of_compilers#C_compilers

Windows and Linux GNU (https://en.wikipedia.org/wiki/GNU/Linux_naming_controversy) OS should have GCC already installed . 

If you don't for some reason here is some signposting:

Ubuntu/Similar debian based OS : https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/
Windows (seriously you still using this crap?) : https://preshing.com/20141108/how-to-install-the-latest-gcc-on-windows/

# Compiling into an executable

Tl;dr

`gcc main.c –o main`

`./main` - Linux GNU

`main.exe` - Windows

To compile into an executable `gcc main.c –o main`. What this command does is compile your C program into a an executable called main (or main.exe if your on Windows).

## If you want to save typing then install yarn

Install instructions: https://yarnpkg.com/lang/en/docs/install/#debian-stable

Scripts : 

* `yarn build` - This will build main for you

* `yarn run` - This will run the main file. You will need to change this from `./main` to `main.exe` in `package.json` if you are on Windows.

Feel free to add your own scripts and PR them.