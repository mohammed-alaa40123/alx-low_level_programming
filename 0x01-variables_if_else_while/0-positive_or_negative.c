#include <stdlib.h>
#include <stdio.h>
#include<time.h>
int main(){
	int n;
	srand(time(0));
	n = rand()- RAND_MAX/2;
	if(n)printf("%d is positive\n",n);
	else if (n==0)printf("%d is zero\n",n);
	else printf("%d is negative\n",n);
	return 0;
}
