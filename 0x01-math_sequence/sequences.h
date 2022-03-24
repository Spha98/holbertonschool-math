#ifndef SEQUENCES_H
#define SEQUENCES_H

#include <stdio.h>
#include <stddef.h>
#include <math.h>

typedef struct t_cell
{
	float elt;
	struct t_cell *next;
} t_cell;

#endif /* SEQUENCES */
