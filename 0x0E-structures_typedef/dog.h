#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog attributes
 *  @name: name of dog
 * @age: age of the dog
 * @owner: owner of dog
 * Description: attributes of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
