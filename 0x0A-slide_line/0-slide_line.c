#include "slide_line.h"

/**
 * slide_left - .....
 * @line: .......
 * @size: .....
 * Return: ........
 */


void slide_left(int *line, size_t size)
{
size_t write_idx = 0;

for (size_t read_idx = 0; read_idx < size; read_idx++)
{
if (line[read_idx] != 0)
{
line[write_idx] = line[read_idx];
write_idx++;
}
}

for (size_t i = write_idx; i < size; i++)
{
line[i] = 0;
}
}

/**
* slide_right - .....
* @line: .......
* @size: .....
* Return: ........
*/
void slide_right(int *line, size_t size)
{
size_t write_idx = size - 1;

for (size_t read_idx = size - 1; (int)read_idx >= 0; read_idx--)
{
if (line[read_idx] != 0)
{
line[write_idx] = line[read_idx];
write_idx--;
}
}

for (size_t i = write_idx + 1; i > 0; i--)
{
line[i - 1] = 0;
}
}

/**
* merge_left - .....
* @line: .......
* @size: .....
* Return: ........
*/
void merge_left(int *line, size_t size)
{
for (size_t i = 0; i < size - 1; i++)
{
if (line[i] != 0 && line[i] == line[i + 1])
{
line[i] *= 2;
line[i + 1] = 0;
}
}
}
/**
* merge_right - .....
* @line: .......
* @size: .....
* Return: ........
*/
void merge_right(int *line, size_t size)
{
for (size_t i = size - 1; (int)i > 0; i--)
{
if (line[i] != 0 && line[i] == line[i - 1])
{
line[i] *= 2;
line[i - 1] = 0;
}
}
}
/**
* slide_line - .....
* @line: .......
* @size: .....
* @direction: .....
* Return: ........
*/
int slide_line(int *line, size_t size, int direction)
{
if (direction == SLIDE_LEFT)
{
slide_left(line, size);
merge_left(line, size);
slide_left(line, size);
}
else if (direction == SLIDE_RIGHT)
{
slide_right(line, size);
merge_right(line, size);
slide_right(line, size);
}
else
{
return (0);
}
return (1);
}
