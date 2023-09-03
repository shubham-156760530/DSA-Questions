# Array Data Structure

### Array Basics

- An array data structure is used to store multiple items of same type at one place. Array is not only data structure where we can store multiple items of same datatype. We have other data structures as well where we can store multiple items of same type like linked-list, hash, Self-balancing BST, But array is different because in array elements are stored at contigous location.
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/87fe1d6b-9d27-486a-9168-5c4d2aa03224)
  - An array is a group of variables of same datatype.
  - In array data structure memory allocation is contigous.
  - Arrays elements are accessed using index.
  - Advantages of Array:
    - Random Access
    - Cache Friendliness
- There are two types of array in C++.
  - Static size array
    - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/cd6eab04-4dfe-4a02-bd4f-869b32147d42)
    - When we declare the size of array at the time of array creation/declaration then it is called as static sized array. Here, array size can not be increated dynamically after array creation.
    - For static size array memory allocation can be in stack area or in heap area.
    - NOTE: When we create array for which memory is allocated in stack area then for that array memory gets cleared as soon as that function execution is completed in which it is declared and defined. But in case of memory allocation in heap area, we have to explicitly clear the memory before the completion of function execution.
  - Dynamic size array
    - In C++, vectors are dynamic size array.
    - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/c9194757-5acc-40fd-9ff6-749cf5e261f4)
    - Dynamic sized array can grow dynamically.
    - Advantages of Vectors:
      - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/668aafc4-10bf-456b-9564-f35b8730547d)


