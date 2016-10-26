//------ двумерный массив --------
struct array
{
	int size;
	char *data;
};

struct array *new_array(int size);
void free_array(struct array *ar);

int get_array_val(struct array *ar, int x, int y);
void set_array_val(struct array *ar, int x, int y, int val);

void print_array(struct array *ar);
