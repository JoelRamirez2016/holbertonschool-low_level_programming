#include <stdio.h>
int _rand();
static int i = 0;

int rand()
{
	int nums[] = {8, 8, 7, 9, 23, 74};
	return nums[i++];
}
