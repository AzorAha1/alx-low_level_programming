#ifndef dog_h
#define dog_h
/**
 * struct dog - name of struct
 * @name: takes char
 * @age: takes float
 * @owner: takes char
 * Description: this is the description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
