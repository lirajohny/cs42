#include "cs42.h"

int main(void)
{
    char *name;
    char *location;

    name = get_str("What is your name? ");
    location = get_str("Where do you live? ");

    // Handle the cases where the calls to get_str() might return NULL
    if (!name || !location)
    {
        ft_putstr("Error reading input.\n");
        free(name);
        free(location);
        return 1;
    }
/*
    write_str("Hello, ");
    write_str(name);
    write_str(", from ");
    write_str(location);
    write_str("!\n");
*/
    ft_putstr("Hello, ");
    ft_putstr(name);
    ft_putstr(", from ");
    ft_putstr(location);
    ft_putstr("!\n");

    free(name);
    free(location);
    return 0;
}
