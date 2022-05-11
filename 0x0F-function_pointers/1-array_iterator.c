#include "function_pointers.h"

/**
 * array_iterator - eecutes  a function argumente
 * @array:  array on int
 * @size: size of the array
 * @action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
