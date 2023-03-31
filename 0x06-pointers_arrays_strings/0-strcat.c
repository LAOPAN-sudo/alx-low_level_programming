/**
 * _strcat - Concatenates two strings
 *
 * @dest: Destination string to append to
 * @src: Source string to append from
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move the pointer to the end of the destination string */
    while (*ptr != '\0')
    {
        ptr++;
    }

    /* Append the source string to the destination string */
    while (*src != '\0')
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    /* Add the terminating null byte */
    *ptr = '\0';

    /* Return the pointer to the resulting string */
    return dest;
}
