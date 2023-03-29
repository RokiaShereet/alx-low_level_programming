#include"main.h"
#include<unistd.h>
/**
 *  * _Putchar - writes the character c to studout
 *   * @c: The character to print
 *    *
 *     * Return: On suceess 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _Putchar(char c)
{
		return (write(1,&c, 1));
}
