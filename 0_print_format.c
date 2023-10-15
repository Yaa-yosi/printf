#include "main.h"
/**
 *_printf - function that produces output according to a format.
 *@format: pointer to string
 *Return: function that produces output according to a format.*
 */
int _printf(const char *format, ...)
{
	va_list print_fmt;
	char *str, ch;
	int len = 0, i;

	/**if (format == NULL)
		return (-1);*/

	va_start(print_fmt, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			len++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				ch = va_arg(print_fmt, int);
				_putchar(ch);
				len++;
			}
			else if (*format == 's')
			{
				str = va_arg(print_fmt, char *);

				for (i = 0; str[i] != '\0'; i++)
				{
					_putchar(str[i]);
					len++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				len++;
			}
		}
		format++;
	}
	va_end(print_fmt);
	return (len);
}
