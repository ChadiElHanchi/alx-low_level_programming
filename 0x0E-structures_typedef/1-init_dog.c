#include "dog.h"

/**
* init_dog - dog
* @d: dog init
* @name: dog name
* @owner: owner name
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name =name;
d->age =age;
d->owner =owner;
}
}