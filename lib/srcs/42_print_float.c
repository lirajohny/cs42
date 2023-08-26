#include "cs42.h"

void print_float(float nbr)
{
    int before;
    int after;
    float decimal_part;
    
    before = (int)nbr;            // Extract whole number part
    decimal_part = nbr - before;  // Extract decimal part

    // Multiply by 100 to print two decimal places.
    // Adjust as needed for more/less precision.
    after = (int)(decimal_part * 100); 

    ft_putnbr(before);
    write(1, ".", 1);
    ft_putnbr(after);
}
