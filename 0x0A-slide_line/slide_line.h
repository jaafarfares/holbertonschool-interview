#ifndef SLIDE_TLINE_H_
#define SLIDE_TLINE_H_

#include <stddef.h>
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>

#define SLIDE_LEFT 1
#define SLIDE_RIGHT 2

int slide_line(int *line, size_t size, int direction);
#endif
