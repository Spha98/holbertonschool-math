#ifndef HEAD_FILE
#define HEAD_FILE

#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struck t_cell - struct with the data
 * @elt: Parameter with the number data
 * @next: Paramenter with the direction of the next element
 *
 * Description: struct to the linked list
 */
typedef struct t_cell
{
	double elt;
	struct t_cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
