#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: a dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
