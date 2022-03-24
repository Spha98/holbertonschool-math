#ifndef _FIBONACCI_H
#define _FIBONACCI_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

/**
 * struct t_cell - struct
 * @elt: int
 * @next: pointer
 */

typedef struct t_cell
{
	int elt;
	struct t_cell *next;
} t_cell;

t_cell *Fibonacci();
double gold_number(t_cell *head);

#endif
