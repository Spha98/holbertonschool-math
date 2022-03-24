#include "heron.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - add node
 * @tpt: pointer
 * @v: double
 * Return: node
 */

t_cell *add_node(t_cell **tpt, double v)
{
	t_cell *tempnode;
	tempnode = *tpt;

	if (tempnode == NULL)
	{
		tempnode = malloc(sizeof(t_cell));
	}
}
