#include "main.h"
/**
 * jack_bauer - prints every minute between 00:00
 * and 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int fh;
	int sh;
	int fm;
	int sm;

	for (fh = 48; fh <= 50; fh++)
	{
		for (sh = 48; sh <= 57; sh++)
		{
			for (fm = 48; fm <= 53; fm++)
			{
				for (sm = 48; sm <= 57; sm++)
				{
					if (fh >= 50 && sh >= 52)
					break;
					_putchar(fh);
					_putchar(sh);
					_putchar(58);
					_putchar(fm);
					_putchar(sm);
					_putchar('\n');
				}
			}
		}
	}

}
