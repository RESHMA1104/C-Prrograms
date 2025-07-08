#include <stdio.h>

int main()
{   
    int a=12,b=12;
	int c = a+b;
    int d = a-b;
	printf("%d\n", c&&d);
	printf("%d\n", c||d);
	printf("%d\n", c!=d);
	return 0;
}

/*
#include <stdio.h>

int main()
{
    int a = 15;
    int b = 7;
    printf("%d\n", (a>b) || (b>a));
    printf("%d\n", !(a>b));
    printf("%d\n", (a>b) && (b<a));
    return 0;
}
*/