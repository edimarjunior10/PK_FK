#ifndef SEMANTIC_H
#define SEMANTIC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../buffend.h"

void insert(char *str, int current_database);

table *start(char *name);

char *table_name_cat(char *name,int database);

#endif