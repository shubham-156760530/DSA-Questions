# Array Data Structure

### Array Basics

- An array data structure is used to store multiple items at one place and these items are typically of same type.
- An array is a group of variables of same datatype.
- In array data structure memory allocation is contigous.
- There are two types of array in C++.
  - Static size array
    - When we declare the size of array at the time of array creation/declaration then it is called as static sized array. Here, array size can not be increated dynamically after array creation.
    - For static size array memory allocation can be in stack area or in heap area.
    - NOTE: When we create array for which memory is allocated in stack area then for that array memory gets cleared as soon as that function execution is completed in which it is declared and defined. But in case of memory allocation in heap area, we have to explicitly clear the memory before the completion of function execution.
  - Dynamic size array
    - In C++, vectors are dynamic size array.
    - Dynamic sized array can grow dynamically.
