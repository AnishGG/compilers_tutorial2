# Compilers Tutorial 2

Implement a program which prints postfix pattern of the given infix expressions.

## Usage

#### Compile grammar 
```bash
$ cd compilers_tutorial2/antlr
# Make grammar and generate cpp files from antlr
$ make grammar
```

* Now make changes in `calcBaseVisitor.h`. Here I have already written a visitor, so just copy it to the `antlr` directory.

#### Compile AST visitor 
```bash
$ cp compilers_tutorial2/calcBaseVisitor.h compilers_tutorial2/antlr
$ make visitor
```

#### Run
```bash
$ ./calc
```

#### Clean
```bash
$ make clean
```
