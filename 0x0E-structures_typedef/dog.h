#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a new type of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Description: dogs description
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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);

#endif
