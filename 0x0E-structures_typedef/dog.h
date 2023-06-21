#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - name of struct
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
