#include "cs42.h"

#include <stdio.h>

int main(void)
{
    float bill;
    float tax;
    float tip;

    bill = get_float("Bill before tax and tip: ");
    tax = get_float("Sale Tax Percent: ");
    tip = get_int("Tip percent: ");

    bill = bill +((tax/100) * bill);
    bill = bill + ((tip/100) * bill);
    ft_putstr("You will owe ");
    print_float(bill / 2);
    ft_putstr(" each!");
}


