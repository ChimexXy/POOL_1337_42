#include <unistd.h>

void    ft_putchar(char c);

void    ft_condition(int line, int max_line, int colone, int max_colone)
{
    if ((line == 1 || line == max_line) && (colone == 1))
        ft_putchar('A');
    else if ((line == 1 || line == max_line) 
        && (colone == max_colone))
        ft_putchar('C');
    else if ((line == 1 || line == max_line) 
        && (colone > 1 && colone < max_colone))
        ft_putchar('B');
    else if ((line > 1 && line < max_line) 
        && (colone == 1 || colone == max_colone))
        ft_putchar('B');
    else
        ft_putchar(' ');
}

void    rush(int x, int y)
{
    int    length;
    int    width;

    if (x > 0 && y > 0)
    {
        length = 1;
        while (length <= y)
        {
            width = 1;
            while (width <= x)
            {
                ft_condition(length, y, width, x);
                width++;
            }
            ft_putchar('\n');
            length++;
        }
    }
    else
        write(1, "inputs = < 0\n", 13);
}
