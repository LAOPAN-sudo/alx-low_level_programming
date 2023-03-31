/**
 * reset_to_98 - a function that swaps the values of two integers
 * @a: pointer to the integer 
 * @b: pointer to the integer 
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
