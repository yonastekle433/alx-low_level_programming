#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code for students
 * @dest: is a pointer type char
 * @src : is a pointer type char
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for(i=0; *dest != 0; i++)
dest++;

for(j=0; src[j] != 0; j++)
{
*dest = src[j];
dest++;
}
*dest = '\0';
dest -= (i + j);
rerturn (dest/0;
}
