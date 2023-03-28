#include "holberton.h"
#include<malloc.h>
#include<string.h>
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
    int c=0;
	while (s[c] != '\0')
	{
		c++;
	}

    char* rev =(char*) malloc(c);
	strcpy(rev,s);
	int k = 0;
	int i =0;
	for (i = c-1; i >=0; i--)
	{
		s[k++] = rev[i];
	}
    s[c+1]='\0';
}
