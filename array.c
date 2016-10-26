#include <stdlib.h>
#include <stdio.h>
#include "array.h"


struct array *new_array(int size)
{
	if(size <= 0)
		return NULL;
	
	struct array *ar = malloc(sizeof(struct array));
	char *data = calloc(size,size);
	ar->size = size;
	ar->data = data;
	
	return ar;
}

void free_array(struct array *ar)
{
	free(ar->data);
	free(ar);
}

int get_array_val(struct array *ar, int x, int y)
{
	int pos = x*ar->size + y;
	return ar->data[pos];
}

void set_array_val(struct array *ar, int x, int y, int val)
{
	int pos = x*ar->size + y;
	ar->data[pos] = val;
}

void print_array(struct array *ar)
{
	int i,j,size = ar->size;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
			if(get_array_val(ar,j,i))
				printf(" X");
			else
				printf(" .");
		printf("\n");
	}		
}