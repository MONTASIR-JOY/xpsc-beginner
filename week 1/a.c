#include <stdio.h>
#include <stdarg.h>

double average(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    double sum = 0.0;
    int count = 0;

    while (*format)
    {
        if (*format == 'i')
        {
            sum += va_arg(args, int);
        }
        else if (*format == 'f')
        {
            sum += (float)va_arg(args, double);
        }
        else if (*format == 'd')
        {
            sum += va_arg(args, double);
        }
        count++;
        format++;
    }

    va_end(args);
    return (count == 0) ? 0 : (sum / count);
}

int main()
{
    double result = average("ifdif", 5, 2.3, 3.5, 10, 2.8);
    printf("Average: %.2f\n", result);
    int a;
    a = (10 > 5) ? 10 : 5; // Correct way to assign value using ternary operator
    printf("%d", a);
    return 0;
}
