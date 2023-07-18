#ifndef dog_h
#define dog_h
/**
 * struct dog - name of struct
 * @name: takes char
 * @age: takes float
 * @owner: takes char
 * Description: this is the description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
