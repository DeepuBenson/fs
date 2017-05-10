#include<stdio.h>
void delay1( )
{
        int j;
        for(j=0;j<10000000;j++);
        printf("\nIn function delay1\n");
}

void delay2( )
{
        int k;
        for(k=0;k<100000000;k++);
        printf("\nIn function delay2\n");
}
int main( )
{
        int i;
        for(i=0;i<1000000;i++);
        printf("\nIn function main\n");
        delay1( );
        delay2( );
        return 0;
}
