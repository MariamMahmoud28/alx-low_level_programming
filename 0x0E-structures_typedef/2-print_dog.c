#include "dog.h"
#include <stdio.h>

/**
 * print_dog - dog
 * @d: dog
 * Return: value
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d-> ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
