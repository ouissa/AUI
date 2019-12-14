#include <stdio.h>
#include <string.h>
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
  //Declaring the library 
  student_t* library[SIZE];
  int index=0; //each elment has an index in the library 
  student_t s1={.id= 79945,.name= "iliass jabali"};
  add_student(library, &s1, index++);
  
return 0;
}
//adding book to library 
void add_book(student_t* library[], student_t *bookp, int index){
    library[index] = bookp;
}
