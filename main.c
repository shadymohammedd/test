#include <stdio.h>
#include <stdlib.h>

void fun(int *p1, int *p2)
{


    printf("x = %d\ny = %d", *p1, *p2);
}


int main()
{
    int x = 7;
    int y = 8;

    fun(&x, &y);

    return 0;

}

body {
	font-size:20px;
}		
