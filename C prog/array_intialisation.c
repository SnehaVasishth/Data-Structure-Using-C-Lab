#include<stdio.h>
int main()
{

int b[8];
float sum=0,avg=0;
for(int i=0;i<8; i++)
{
scanf("%d",&b[i]);
sum= sum + b[i];

}


for(int i=0; i<8; i++)
printf("%d  ",b[i]);
printf("\naverage=%f",(sum/8));
}
