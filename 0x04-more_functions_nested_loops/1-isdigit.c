#include "main.h"

/** 
 * _isdigit - checks for 0 through 9 numbers.
 * @c : The character to be checked.
 *
 * Return: 1 if character is 0 through 9, 0 otherwise.
 */

int _isdigit(int c)
{
            if ( c >= '0' && c <= '9' )
                       return (1);

            else 
                       return (0);
}
