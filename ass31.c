#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{

    int i,j, len;
    char *s[5] , temp[20] , *t;

  for(i = 0;i<3;i++)
  {
  
    printf("Enter the Name\n");
    scanf("%s",&temp);
    len = strlen(temp);
    s[i] = (char*) malloc(sizeof(char) * len+1);
    strcpy(s[i] , temp);
    
  }
  
    for(i = 0;i<3;i++)
  {
  
    printf("Enter String is= %s\n" , s[i]);
 
  }
  
  for(i = 0;i<3-1;i++)
  {
      for(j = i+1;j<3;j++)
      {
      
      if(strcmp(s[i] , s[j]) > 0){
          
          t = s[i];
          s[i] = s[j];
          s[j] = t;
          }
      }
      
    }

  for(i = 0;i<3;i++)
  {
  
    printf("After Sorting  String is= %s\n" , s[i]);
 
  }
   for(i = 0;i<3;i++)
  {
   free(s[i]);
  }
  return 0 ; 
  }
