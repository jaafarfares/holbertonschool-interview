#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

#include <stdio.h>
#include <stdlib.h>

#define SLIDE_LEFT 1
#define SLIDE_RIGHT 2


void slide_left(int *line, size_t size);
void slide_right(int *line, size_t size);
void merge_left(int *line, size_t size);
void merge_right(int *line, size_t size);
int slide_line(int *line, size_t size, int direction);

#endif
