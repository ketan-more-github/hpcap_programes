#include<iostream>
#include<cstring>
#include"employee.h"


employee::employee(){
  emp_id = 10;
  strcpy(name , "siddhat")

}
employee::employee(int id , char* nm , int db){

    emp_id = id;
    strcpy(name , nm);
    dob = db

}

void show(){

cout<<"emp id = "emp_id<<"emp name = "name<<"emp dob = "dob<<endl;

}

