/**
 * swap_int - check the code
 * @a: pointer variable
 * @b: pointer variable
 * 
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp;
		tmp = *a;
		*a = *b;
		*b = tmp;
}
