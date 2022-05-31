#include <stdio.h>
int main()
{
   int* pc, c;
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc);  
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc);   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); 
   return 0;
}
/* output;
Address of c: 0x7ffd108a5e2c
Value of c: 22

Address of pointer pc: 0x7ffd108a5e2c
Content of pointer pc: 22

Address of pointer pc: 0x7ffd108a5e2c
Content of pointer pc: 11

Address of c: 0x7ffd108a5e2c
Value of c: 2 */
