#include <stdlib.h>
#include "dog.h"
/**
* _strlen - calculates the length of a string
* @s: thr string
* Return: the string length
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *_strcpy - copies the string
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: the pointer to destination
*/
char *_strcpy(char *dest, char *src)
{
	int leng, x;

	leng = 0;
	while (src[leng] != '\0')
	{
		leng++;
	}
	for (x = 0; x < leng; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
* new_dog - creates a new dog structure
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: pointer to new dog age , name , owner
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leng1, leng2;

	leng1 = _strlen(name);
	leng2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (leng1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
