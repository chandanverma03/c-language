#include<stdio.h>
int main()
{
	printf("\n\n\t\t\t\tWelcome to C Programming\n\n");
  int i=1,n,m,a;
  printf("\n\t\tEnter the limit of the table : ");
  scanf("%d",&n);
  printf("\n\n\t\tEnter the table's number : ");
  scanf("%d",&a);
  while(i<=n)
  {
    printf("\n\t\t\t%d x %d = %d",i,a,i*a);
    i++;
  }
  return 0;
}
