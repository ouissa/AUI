#include <stdio.h>
#define SIZE 100

//Defining the struct
typedef struct{
  int id;
  char* name;
}student_t;
//Defining the functions
void add_student(student_t* library[], student_t* , int index); 
int search_by_id(student_t* library[], int index); 

int main(void){
  int keyword;
  //Declaring the library 
  student_t* library[SIZE];
  int index=0; //each elment has an index in the library 
  student_t s1={.id= 79945,.name= "iliass jabali"};
  student_t s2={.id= 95163,.name= "full name"};
  add_student(library, &s1, index++);
  add_student(library, &s2, index++);
  
  return 0;
}
//adding book to library 
void add_book(student_t* library[], student_t *studentp, int index){
   library[index] = studentp;
}
int search_by_id(student_t* library[], int index){
   int i;
   for (i = 0; i < index; i++)
        if (contains_number(library[i]->title, keyword))
            return i;
    return -1;//-1 means it's not in the library 
}  
