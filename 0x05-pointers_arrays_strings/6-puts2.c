#include "holberton.h"

/**
 * puts2 - print every other character of a string
 * @str:pointer char
 * return:void
 */
void puts2(chnr *str)
{
<<<<<<< HEAD
	int i, x;
i = 0;
x = 0;
	while (str[i++])
	{
	x++;
	}
=======
  int i, x;
i = 0;
x = 0;
  while (str[i++])
  {
  x++;
  }
>>>>>>> d6b205dff9558fca77a89ed17cef730c78623378
for (i = 0; i < x; i += 2)
{
_putchar(*(str + 1));
}
_putchar('\n');
}
