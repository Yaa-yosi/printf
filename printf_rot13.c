#include "main.h"

/**
 * print_rot13 - encoder rot13
 * @fmt: pointer to string
 * Return: number of characters printed
 */

int print_rot13(va_list fmt)
{
	char *str = va_arg(fmt, char *);
	int size = _strlen(str);
	char *array = malloc(size + 1);
	int i, j, count = 0;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (array == NULL)
		return (0);
	_strcpy(array, str);

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (array[i] == data1[j])
			{
				array[i] = datarot[j];
				_putchar(array[i]);
				count++;
				break;
			}
		}
	}
	return (count);
}
