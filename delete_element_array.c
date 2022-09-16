#include<stdio.h>

void delete(int *b,int pos)
{
int index= (pos-1);
if(index>6 || index<0)
printf("Error!!");
else
{
for(int i= pos; i<=5; i++)
b[i-1]= b[i];
printf("edited array\n");
for(int i=0; i<5;i++)
printf("%d  ",b[i]);


}


}
















int main()
{

int b[6];
int pos;


scanf("%d%", &pos);
printf("enter the value in the array\n");
for(int i=0;i<6; i++)
{
scanf("%d",&b[i]);
}

for(int i=0; i<6; i++)
printf("%d  ",b[i]);
printf(" \n");

delete(b,pos);
}
