
#include<iostream>
#include<string.h>
using namespace std;

class Employee{

  int emp_id;
  char emp_name[20];
  double emp_salary;

  
 public:
          Employee();
          Employee(int, char* ,double);
          void accept();
          void display();
          int get_id();
          
          
};

int Employee :: get_id()
{
  return emp_id;
}

Employee::Employee(){
}


//Employee::Employee(int a, char *str , double s){
  
  // emp_id = a;
  // strcpy(emp_name , str);
   //emp_salary = s;

//}


 void Employee :: accept()
 {
  cout<<"Enter Emp_Information"<<endl;
  cin>>emp_id>>emp_name>>emp_salary;
 }
 
  void Employee :: display()
 {
  
  cout<<emp_id<<" "<<emp_name<<" "<<emp_salary<<endl;
 }        

int main()
{
Employee a[10];
int ch , emp_id2;
int cnt=0;
while(true)
{
cout<<"Press 1 to insert record in array"<<endl;
cout<<"Press 2 to update record in array"<<endl;
cout<<"Press 3 to display all record in array"<<endl;
cout<<"Press 0 to Exit"<<endl;
cin>>ch;

switch(ch)
{

case 1:
        a[cnt++].accept();
        break;
case 2:
      cout<<"Enter Emp_id TO Update Employee details"<<endl;
      cin>>emp_id2;
      for(int i=0;i<cnt;i++)
      {
        if(emp_id2==a[i].get_id())
        {
          a[i].accept();
        
        }
      }
        break;

case 3:
      cout<<"*** Emp_Information***"<<endl;
     for(int i=0;i<cnt;i++)
       {
         a[i].display();
       }
        break;
        
case 0:
        exit(0);

}
}


 
return 0;
}
