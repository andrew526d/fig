enum RH
{
	RH_UP,
	RH_LEFT,
	RH_DOWN,
	RH_RIGHT
};

struct figure
{
	int size; // ���������� ������
	
	int *x;	//������ ��������� x
	int *y;	//������ ��������� y;
	int *rh;//��� ��������� ������ ����
};

struct figure *new_figure(int size);
void free_figure(struct figure *fig);

int cmp_figure(struct figure *fig1, struct figure *fig2); //1 ���� �����, ����� 0

void next_figure(struct figure *fig);

void print_figure(struct figure *fig);
