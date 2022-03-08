#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that groups the characteristics of the dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Description: This struct has the data of my_dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
