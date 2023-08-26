#include "cs42.h"


/* GETS INFORMATION FROM THE USER 
 * get_str | get_int | get_long | get_float  */

char *get_str(const char *prompt)
{
    int len = 0;
    char c;
    char *input;
    
    // Display the prompt
    write(1, prompt, ft_slen(prompt));


    // Read characters until '\n' or EOF is found
    while (1)
    {
        // Refill the buffer if empty
        if (buffer_pos == buffer_len)
        {
            buffer_len = read(0, read_buffer, BUFFER_SIZE);
            buffer_pos = 0;
            if (buffer_len <= 0)
            {
                // EOF or an error
                if (len == 0)
                {
                    return NULL; // No input was read
                }
                break;
            }
        }

        c = read_buffer[buffer_pos++];
        if (c == '\n')
        {
            break;
        }

        if (len < (BUFFER_SIZE * 2) - 1)
        {
            str_buffer[len++] = c;
        }
    }

    str_buffer[len] = '\0'; // Null-terminate the string

    // Duplicate the string before returning
    input = ft_strdup(str_buffer);
    if (!input)
    {
        // Memory allocation failed
        return NULL;
    }
    return input;
}


void write_str(const char *str)
{
    write(1, str, ft_strlen(str));
}

int get_int(const char *str)
{
    char *input;
    int nbr;

    input = ft_strdup(get_str(str)); 
    nbr = (int)ft_atoi(input);
    
    return (nbr);
}

long get_long(const char *str)
{
    char *input;
    long nbr;

    input = ft_strdup(get_str(str)); 
    nbr = ft_atoi(input);
    
    return (nbr);
}

float get_float(const char *str)
{
    char *input;
    float nbr;

    input = ft_strdup(get_str(str)); 
    nbr = ft_atoi_float(input);
    
    return (nbr);
}

