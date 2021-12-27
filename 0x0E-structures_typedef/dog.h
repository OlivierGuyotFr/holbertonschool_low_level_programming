#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: name;
 * @age: age;
 * @owner: owner;
 *
 * Description: dog description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
