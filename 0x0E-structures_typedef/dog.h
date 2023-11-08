#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog's info
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Defines a new type called 'dog' that stores info about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

#endif
