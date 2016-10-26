#include <stdio.h>
#include "array.h"
#include "figure.h"

void main()
{	
	struct figure *fig = new_figure(5);
	
	print_figure(fig);
	
	free_figure(fig);

}