/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array
 * @n: The number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int		i;
	int		temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
