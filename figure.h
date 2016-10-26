enum RH
{
	RH_UP,
	RH_LEFT,
	RH_DOWN,
	RH_RIGHT
};

struct figure
{
	int size; // количество клеток
	
	int *x;	//массив координат x
	int *y;	//массив координат y;
	int *rh;//где находится правая рука
};

struct figure *new_figure(int size);
void free_figure(struct figure *fig);

int cmp_figure(struct figure *fig1, struct figure *fig2); //1 если равны, иначе 0

void next_figure(struct figure *fig);

void print_figure(struct figure *fig);
