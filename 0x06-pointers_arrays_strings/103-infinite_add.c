/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry = 0, sum = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i + 2 > size_r || j + 2 > size_r)
		return (0);

	r[i + 1] = '\0';
	i--;
	j--;
	size_r--;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
		carry = sum / 10;
		r[size_r--] = (sum % 10) + '0';
		i--;
		j--;
	}
	return (r + size_r + 1);
}
