#ifndef DOG_h
#define DOG_h
/**
*struct dog - information about a dog
*@name: pointer to a string
*@age: float
*@owner: pointer to a string
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
void print_dog(struct dog *d);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
