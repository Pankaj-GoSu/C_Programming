/*
Author : Pankaj Goswami
Purpose : Memory Layout of C Program.
Date : 11/01/2022
*/

//=========== Very Important !  =========
/*
Qu : What and Why Dynamic Memory allocation ?
Ans : An Statically allocated variable or array has a fix size in memory.
      
      Memory is a very useful resource.
      
      Dynamic Memory Allocation is a way in which the size of a data structure
      can be changed during the runtime.
      
      Allocation is done during the program execution.
    
      There is memory reusability and the allocated memory can be freed when not required.


*/

/*
# Memory assigned to a program in a typical architecture can be broken 
  down into four segments
  1. Code -> Text Segment
  2. Static/global variables
  3. Stack
  4. Heap -> Using Heap we can do Dynamic memory allocation.

# === Use Of Heap.
    1- We can create a pointer in our main function and point to a memory block in the heap.
    2- The address is stored by the local variable in the main function.
    3- The memory consumed will not get freed automatically in case we overwrite the pointer.

==>> We can use dynamic memory allocation to allocate memory during runtime.

*/

