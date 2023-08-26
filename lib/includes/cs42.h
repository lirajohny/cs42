#ifndef CS42_H
# define CS42_H

#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

static char read_buffer[BUFFER_SIZE];
static char str_buffer[BUFFER_SIZE * 2];
static int buffer_pos = 0;
static int buffer_len = 0;

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
void    ft_string(const char *str);
int		ft_strlen(const char *str);
int		ft_strcmp(char *S1, char *s2);
float ft_atoi(char *str);
int	ft_iterative_power(int nb, int power);
void    ft_putnbr(int nbr);
void    ft_print_nbr(int nb);
int ft_str_is_alpha(char *str);
int	is_alpha(char c);
int	ft_str_is_numeric(char *str);
char	*ft_strdup(char *src);
char *get_str(const char *prompt);
int get_int(const char *str);
long get_long(const char *str);
float get_float(const char *str);
void print_float(float nbr);

#endif
