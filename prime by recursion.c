#include<stdio.h>
int primeNo(int,int);
int main()
{
 int num,prime;
 printf("ENTER THE INPUT NUMBER:  ");
 scanf("%d",&num);
 if (num==0||num==1)
 printf("%d  : IS NOT A PRIME NUMBERS(NEITHER PRIME NOR COMPOSITE.)",num);
 else
 {
 	prime=primeNo(num,num/2);
 	if(prime==1)
 	printf("%d  : IS A PRIME NUMBER ",num);
 	else
 	printf("%d  : IS NOT A PRIME NUMBER.IT IS COMPSITE ",num);
 }
}   
int primeNo(int num,int i)
{
	if(i==1)
	{
		return 1;
	}
	else{
		if(num%i==0)
		return 0;
		else
		primeNo(num,i-1);
	}
}
