#include<stdio.h>

void charline(int length  ,char c)
{
for(int i =1; i<=length;i++)
{
  printf("%c" , c);
}
printf("\n"); 
}


int main()
{
int l;
char ch;
printf("Enter the length of a line\n");
scanf("%d",&l);
getchar();
printf("Enter the char for line\n");
scanf("%c",&ch);


printf("Data type   Size in byte\n");
charline(l ,ch);
printf("Integer     4\n");
charline(l ,ch);
printf("Character   1\n");
charline(l ,ch);
printf("Float       4\n");
charline(l ,ch);
return 0;
}
