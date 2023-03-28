#include<stdio.h>

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

	char rev[c];
	int k = 0;

	for (int i = c-1; i >=0; i--)
	{
		rev[k++] = s[i];
	}
    for (int i = 0; i <=c; i++)
	{
		s[i] = rev[i];
	}
    s[c+1]='\0';
}
