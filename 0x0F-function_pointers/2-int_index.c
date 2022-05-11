#include "function_pointers.h"

/**
 * int_index - searches for  an  integer in an array
 * @array: array  of int
 * @size: size of an array
 * @cmp: function pointer
 * Return: index of the first occurence of int being serched
 * or -1 if none found
 */
int  int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ( cmp == NULL || size < 1 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if  (cmp(array[i]))
			return  (i);
	}
	return (-1);
}
