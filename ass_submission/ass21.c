#include<stdio.h>


void areacircum(int r , double * aoc , double * poc)
{
    *aoc =  3.14*r*r;
    *poc = 2*3.14*r;

}
void areaperi(int l ,int  b , int * aor , int * por)
{
  *aor = l*b;
  *por = 2*(l+b);
}



int main()
{
 int  areaofrect , perirect; 
 double areaofcir ,pericircle;
 int ch;
 printf("Enter 1 to choose Circle\n");
 printf("Enter 2 to choose Rectangle\n");
 printf("Enter 0 to exit\n");
 scanf("%d" , &ch);
 

while(ch!=0)
 {
 
 
 if(ch==1)
 {
  // circle
  int r;
  printf("You choose Circle Plese Enter radius of a circle\n");
  scanf("%d" , &r);
  areacircum(r , &areaofcir , &pericircle );
  printf("Area OF a Circle is = %lf \n" , areaofcir);
  printf("Circumference OF a Circle is = %lf \n", pericircle);
  break;
 }
 
 if(ch==2)
 {
 //rectangle
 int l , b;
 printf("You choose Rectangle Please Enter Length and Breadth of a rectangle\n");
 scanf("%d%d" , &l , &b);
 areaperi(l , b , &areaofrect , &perirect );
 printf("Area OF a rectangle is = %d \n" , areaofrect);
 printf("Circumference OF a Circle is = %d \n" ,perirect);
 break;
 }
 
 
 
 }
 
 
return 0;
}
