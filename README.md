# Flex+Bison Translator - a university project
## Progress
| Stage                                                | Status                 |
|:-----------------------------------------------------|-----------------------:|
| Lexical analyzator                                   |            In progress |
| Symantic analyzator                                  |       Not even touched |
| Full head-on ready-ass PascalABC.NET -> C translator | Don't know didn't read |

## How to build
You will require such tools as `gcc`, `make`, `flex` and `bison` in order to build this project. I'm sure y'all have those, but it is highly recomended for you to setup things as this guide states to avoid random issues. You *may* not use `make` for this but other tools are must-have.
* Download `gcc` [here](https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download).
* Download `make` [here](https://sourceforge.net/projects/gnuwin32/files/make/3.81/make-3.81.exe/download).
* Download `flex` [here](https://sourceforge.net/projects/gnuwin32/files/flex/2.5.4a-1/flex-2.5.4a-1.exe/download).  
* Download `bison` [here](https://sourceforge.net/projects/gnuwin32/files/bison/2.4.1/bison-2.4.1-setup.exe/download).  

Install all programms.  
By default `gcc` will be installed in `MinGW` directory. In the `MinGW` directory, locate `bin` directory and add it to the `PATH`.  
By default `make`, `flex` and `bison` will be installed in the `GnuWin32` directory. In the `GnuWin32` directory, locate `bin` directory and add it to the `PATH`

Note that libraries included may not be compatible with your machine (idk what to do with that sorry)

While in the working directory, type in CMD

```
make && translate
```
