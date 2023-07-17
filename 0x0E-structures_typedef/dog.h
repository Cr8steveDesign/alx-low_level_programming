#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* DOG_H */