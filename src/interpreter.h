#ifndef _INTERPRETER_H
#define _INTERPRETER_H

#define CONTINUE_FLAG 2
#define BREAK_FLAG 1

#include <stdio.h>
#include "object.h"
#include "node.h"
#include "parser.h"
#include "symbolTable.h"
#include "stack.h"

// parser tokenizer
extern FILE *yyin;
extern int yyparse();
extern Node *tree;

// function
void run(char *file_name);


#endif