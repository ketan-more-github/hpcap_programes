#include<stdio.h>

int main()
{
char str[50];
char ch;
int cnt = 0;
printf("Enter Your String\n");
gets(str);

printf("Enter character to check its occerence in string\n");
scanf("%c" , &ch);

for(int i= 0; i<sizeof(str); i++)
{
  if(str[i]==ch)
  {
    cnt++;
  }
}

printf("character ""%c"" occures = %d times\n " , ch , cnt);


return 0;
}
   // 29. Write a program to accept a string from the user.  Write separate functions to perform the /////following:
//    a. Find the number of occurrences of given character in the string
  //  b. Find the number of blank spaces in the string.
    //c. Find the number of words in the string.
    //d. Find the total number of all the vowels in the string.
