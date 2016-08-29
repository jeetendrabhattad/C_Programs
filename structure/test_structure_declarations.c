#include <stdio.h>

struct __attribute__((__packed__)) atomic_weight
{
	char symbol;
	double weight;
	char prefix;
	int value;
	struct atomic_weight *i; //self-referential
//	int v = 0; this is not allowed as this is declaration
/*	struct atomic_weight l; //as atomic_weight is not yet completely declared compiler is unable to recognize the amount of memory that will be required for variable of type struct atomic_weight and hence it gives error:
	error: field ‘l’ has incomplete type*/
//	register int r;
//	static int s; //error: expected specifier-qualifier-list before ‘static’
	const int c;
	int ch;
};

struct reorganized_atomic_weight
{
	char symbol;
	char prefix;
	char suffix;
	double d;
	int i;
	const c;
}instance={'1','2',3,4,5,6};

int main()
{
	struct atomic_weight k= {.symbol = 0,
                            .c = 10,
  							.weight = 0,
							.value = 0,
							.prefix = 0,
							.i = 0,
							.ch = 0};
	printf("Structure Memory Layout Demo !!!\n");
	printf("Size of structure instance would be %d\n", sizeof(struct atomic_weight));
	printf("Size of reorganized declaration order in structure is %d\n", sizeof(struct reorganized_atomic_weight));
}
