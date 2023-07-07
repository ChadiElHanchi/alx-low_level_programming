#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
        int i = -1;

        do {
                i++;
                dest[i] = src[i];
        } while (src[i] != '\0');

        return (dest);
}
