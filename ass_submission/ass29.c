#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void find_cntVowel(char *arr){
    int cnt3 = 0;
    for(int i= 0; i<strlen(arr);i++){
        if(arr[i]=='a' || arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o' || arr[i]=='u'){
            cnt3++;
        }
    
    }
    printf("cnt of Vowels in a String = %d\n" , cnt3);
    printf("\n");

}
void find_occ(char *str){
  char ch;
  int cnt = 0;
 
  printf("Enter character to check its occerence in string\n");
  getchar();
  scanf("%c" , &ch);

  for(int i= 0; i<sizeof(str); i++)
  {
  if(str[i]==ch)
  {
  cnt++;
  }
  }

printf("character ""%c"" occures = %d times\n" , ch , cnt);
printf("\n");
  }

int get_blanksapce(char *arr){
    int cnt1 = 0;
   
    for(int i =0; i<strlen(arr);i++){
        
                     
        if(arr[i] == ' '){
          cnt1++;
        }
    
    }
  return cnt1;
}
int get_words(char *arr){
     int cnt2 = 0;
   
    for(int i =0; i<strlen(arr);i++){
        
                     
        if(arr[i] == ' '){
          cnt2++;
        }
    
    }
  return cnt2+1;
}

int main()
{

char str[50];
 printf("Enter Your String\n");
fgets(str , sizeof(str) , stdin);
int cnt = 1;
int ch;
while(cnt>0){

printf("Enter 1 to get occurenece of a character in enterd string\n");
printf("Enter 2 to get number of blank spaces in the string\n");
printf("Enter 3 Find the number of words in the string.\n");
printf("Enter 4 Find the total number of all the vowels in the string\n");
printf("Enter 0 To Exit \n");
scanf("%d" , &ch);

    switch(ch){
    
      case 1 :  
                find_occ(str);
                break;
      case 2 :
                
                printf("space in strings are = %d\n" , get_blanksapce(str)) ;
                printf("\n");
                break;
      case 3 :
                printf("word in strings are = %d\n" , get_words(str));
                printf("\n");
                break;            
      case 4 :
                find_cntVowel(str);
                break;
      case 0 :
                exit(0);          
                break;
    }
}


find_occ(str);



return 0;
}
   // 29. Write a program to accept a string from the user.  Write separate functions to perform the /////following:
//    a. Find the number of occurrences of given character in the string
  //  b. Find the number of blank spaces in the string.
    //c. Find the number of words in the string.
    //d. Find the total number of all the vowels in the string.
