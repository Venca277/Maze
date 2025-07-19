//
// Created by venca on 02.11.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    FILE *soubor;
    errno = 0;
    soubor = fopen("\\\\wsl$\\Debian\\home\\vaclav\\github_projekty\\Maze\\test.txt", "r");
    int error_number = errno;

    if (soubor == NULL)
    {
        printf("Soubor je null\n");
        return 1;
    }

    printf("Soubor se načetl v pořádku\n");

    if (fclose(soubor) == EOF)
    {
        printf("Error při zavření souboru\n");
        return 2;
    }

    printf("Soubor se v pořádku zavřel\n");

    return 0;
}