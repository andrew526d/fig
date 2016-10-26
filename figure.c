#include <stdlib.h>
#include "figure.h"
#include "array.h"

struct figure *new_figure(int size)
{
	if(size <= 0)
		return NULL;
	
	struct figure *fig = malloc(sizeof(struct figure));
	
	fig->size = size;
	fig->x = calloc(sizeof(int),size);
	fig->y = calloc(sizeof(int),size);
	
	int i;
	for(i=0;i<size;i++)
	{
		fig->x[i] = i;
		fig->y[i] = 0;
	}
	
	return fig;
}

void free_figure(struct figure *fig)
{
	free(fig->x);
	free(fig->y);
	free(fig);
}

int cmp_figure(struct figure *fig1, struct figure *fig2)
{
	
}

void next_figure(struct figure *fig)
{
	
}

void print_figure(struct figure *fig)
{
	int size = fig->size;
	int i;
	struct array *ar = new_array(2*size - 1);
	
	
	for(i=0;i<size;i++)
		set_array_val(ar,size+fig->x[i]-1,size+fig->y[i]-1,1);
	
	print_array(ar);
	free_array(ar);
}
