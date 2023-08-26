#include "cs42.h"

char *get_str(const char *prompt)
{
    int len = 0;
    char c;
    char *input;
    
    // Display the prompt
    write(1, prompt, ft_strlen(prompt));


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

        if (len < (BUFFER_SIZE * 2) - 1)  // Ajustar para o tamanho de str_buffer
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

int main(void)
{
    char *name;
    char *location;

    name = get_str("What is your name? ");
    location = get_str("Where do you live? ");

    // Handle the cases where the calls to get_str() might return NULL
    if (!name || !location)
    {
        write_str("Error reading input.\n");
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
    ft_string("Hello, ");
    ft_string(name);
    ft_string(", from ");
    ft_string(location);
    ft_string("!\n");

    free(name);
    free(location);
    return 0;
}
