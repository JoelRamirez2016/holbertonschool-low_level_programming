void print_array(int *a, int n)
{
	int i;

	printf("%i", a[0]);
	for (i = 1; i < n ; i++)
		printf(", %i", *(a+i));
}
