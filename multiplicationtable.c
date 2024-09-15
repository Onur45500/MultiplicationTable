
/* multiplicationtable.c */

#include <stdio.h>
#include <assert.h>

#define F fflush(stdout) 

void multiplicate(int x, int y)
{
	int result;

	result = x * y;

	printf("%d x %d = %d\n",
	x,
	y,
	result);

	return;
}

int main()
{
	int table;
	int i = 0;
	printf("Write a multiplication table (that will multiply it to 13)\n"); F;
	scanf("%d", &table);
	
	assert((table > 0) && (table < 13));	

	for(i ; i < 13; i++)
		multiplicate(table, i);
	
	return 0;
}
