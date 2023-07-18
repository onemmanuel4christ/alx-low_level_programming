#include <stdlib.h>
	#include "dog.h"


	/**
	 * init_dog - initializes a to inherit dog construct
	 * @d: pointer to intizing a dog struct
	 * @name: name to initializ
	 * @age: age to initialize
	 * @owner: owner to initialize
	 *
	 * Description: this program uses a struct in C
	 */
	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

