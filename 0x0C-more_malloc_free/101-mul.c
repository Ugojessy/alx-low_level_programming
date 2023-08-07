

	res[i + len] = '\0';

	return (res);
}

/**
 * mul_digit - multiplies a string by a digit
 * @s: the string
 * @digit: the digit
 *
 * Return: a pointer to the result
 */
char *mul_digit(char *s, char digit)
{
	char *res;
	static int d[150];
	int i, j, len, lenr, carry, num, temp;

	len = strlen(s);
	carry = 0;

	res = malloc((len + 2) * sizeof(char));

	for (i = len - 1; i >= 0; i--)
	{
		temp = ((s[i] - 48) * (digit - 48)) + carry;

		if (temp > 10)
		{
			num = temp % 10;
			carry = temp / 10;
		}
		else
		{
			num = temp;
			carry = 0;
		}

		d[i] = num;
	}

	if (carry > 0)
		d[0] += (carry * 10);

	i = 0;
	j = 0;
	if (d[0] > 9)
	{
		res[1] = (d[0] % 10) + 48;
		res[0] = (d[0] / 10) + 48;
		j = 2;
		i = 1;
	}

	while (i < len)
	{
		res[j] = d[i] + 48;
		i++;
		j++;
	}
	lenr = strlen(res);
	res[lenr] = '\0';

	return (res);
}

/**
 * add_numbers - adds two strings
 * @n1: the first string
 * @n2: the second string
 * @len1: length of the first string
 * @len2: length of the second string
 *
 * Return: a pointer to the answer
 */
char *add_numbers(char *n1, char *n2, int len1, int len2)
{
	int i, j, k, l, num, rem = 0;
	static int d[150];
	char *res;

	res = malloc((len1 + 2) * sizeof(char));

	j = len2 - 1;
	k = len1 - len2 - 1;
	for (i = len1 - 1; i > k; i--)
	{
		num = rem + (n1[i] - 48) + (n2[j] - 48);
		if (num > 9)
		{
			num = num - 10;
			rem = 1;
		}
		else
		{
			rem = 0;
		}
		d[i] = num;
		j--;
	}
	for (l = i; l >= 0; l--)
	{
		num = rem + n1[l] - 48;
		if (num > 9)
		{
			num = num - 10;
			rem = 1;
		}
		else
		{
			rem = 0;
		}
		d[l] = num;
	}
	if (rem == 1)
		d[0] += 10;
	i = 0;
	j = 0;
	if (d[0] > 9)
	{
		res[1] = (d[0] % 10) + 48;
		res[0] = 49;
		j = 2;
		i = 1;
	}
	while (i < len1)
	{
		res[j] = d[i] + 48;
		i++;
		j++;
	}
	res[i + 1] = '\0';

	return (res);
}
