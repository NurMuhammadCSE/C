#include  <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  printf("Hello, Dcoder!");
  printf("\n");
  printf("I love C Programming\n");
  
  // Variable Declaration
  int marks;
  int price;
  float number;
  
  //  Variable Assignment
  marks = 90;
  price = 150;
  number = 12.2;
  
  // Variable Naming Rules
  // Dont use Reserved Keyword
  int num;
  int num2; // Not 2num
  int my_name;
  int myName;
  
  // Output
  printf("Marks = %d\n",marks);
  printf("Price = %d\n",price);
  printf("My Number %f\n",number);
  
  // Comments
  // Single Line Comment
  /* 
    This is
    Multiline Comments
  */
  return 0;
}

