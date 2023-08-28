/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copier.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:44:49 by jlira             #+#    #+#             */
/*   Updated: 2023/08/17 13:45:07 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_copy(FILE *src, FILE *dst) 
{
    char buffer[10];
    size_t bytes_read;

    while ((bytes_read = fread(buffer, 1, sizeof(buffer), src)) > 0) 
    {
        if (fwrite(buffer, 1, bytes_read, dst) != bytes_read) 
        {
            perror("Erro ao escrever no arquivo de destino");
            return;
        }
    }

    if (ferror(src)) 
    {
        perror("Erro ao ler o arquivo de origem");
    }
}

int main(int argc, char **av) 
{
    if (argc != 3) {
        printf("Uso: %s <origem.txt> <destino.txt>\n", av[0]);
        return -1;
    }

    FILE *fp_src = fopen(av[1], "r");
    if (!fp_src) 
    {
        perror("Erro ao abrir arquivo de origem");
        return -1;
    }

    FILE *fp_dst = fopen(av[2], "a");
    if (!fp_dst) 
    {
        perror("Erro ao abrir arquivo de destino");
        fclose(fp_src);
        return -1;
    }

    ft_copy(fp_src, fp_dst);

    fclose(fp_src);
    fclose(fp_dst);
    return 0;
}

