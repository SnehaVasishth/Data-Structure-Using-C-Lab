#include<stdio.h>

void insert(int *b,int pos,int ins)
{
int index= (pos-1);
for(int i=5; i>= index; i--)
{

b[i+1]= b[i];

}
b[index]= ins;
for(int i=0;i<7;i++)
{
printf("%d ",b[i]);
}

}

int main()
{

int b[8];
int pos;
int ins;
scanf("%d%d" ,&pos,&ins);
for(int i=0;i<6; i++)
{
scanf("%d",&b[i]);
}
for(int i=0; i<6; i++)
printf("%d  ",b[i]);
printf(" \n");

insert(b,pos,ins);
}
