#include<stdio.h>
int main()
{

int b[8];
int max,min;

for(int i=0;i<8; i++)
{
scanf("%d",&b[i]);
}

max= b[1];
min= b[1];
for(int i=0; i<8; i++)
printf("%d  ",b[i]);

for(int i=0;i<8;i++)
{
if(max< b[i])
    max= b[i];
if(min> b[i])
    min= b[i];

}
printf("\n Maximum number=%d \n minimum number=%d",max,min);

}
