# Hashing

## Usecases of Hashing-

- Hashing is useful when we have to perform search, insert and delete operations.
- These operations takes O(1) time with Hashing. It is always better than any data structure for search, insert and delete operations.
- Hashing is not useful when we have to do closest search or prefix matching things.
- Direct Address Table Method is alternative of Hashing. But Direct Address Table method has a lot of problems like-
  - It can not handle large number of values, like phone numbers. Phone numbers can be 10^10 so these many indexes are not possible.
  - It can not handle floating point numbers, strings because index can not be floating point numbers or strings.
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/4d0a372f-457b-4c07-ac31-c95f011298ab)
  - We have hash table data structure which handles all these problems.
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/948a9341-6629-43fa-8d5d-3e0a19d7b9e7)
## Introduction of Hashing:
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/22fea65f-1042-4f40-8456-112a1a510c71)
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/3e552b6a-4057-41c5-9ea6-98f1457d8549)
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/aaf64e22-7c06-45a0-81a2-37968d41d28e)
### Collision Handling in Hashing:
  - Collision is situation when for two different values hash function gives same key hash then index or keys becomes same.
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/7c0d318b-dc69-4b61-ae26-8a0a327f072e)
#### Chaining for Collision Handling:
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/841ce21d-b077-4023-b301-68bd2554032b)
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/a20b7eb2-6587-4989-81bc-61b081b93041)
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/e4014230-9e9a-4905-8ff8-d4eb00f36653)
#### Implementation of Chaining:
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/b36d78bc-5f41-4f2c-9fe0-d710cabe2e84)
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/c6247958-a821-439e-9f4b-1ff22f16ac4f)
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/97043738-e531-4219-945d-03e14b34adcc)
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/0960efbf-0f7b-4f15-8d93-68f0ab4e5fc6)
  -       // C++ program to demonstrate implementation of our 
          // own hash table with chaining for collision detection 
          #include<bits/stdc++.h>
          using namespace std;
          
          struct MyHash
          {
              int BUCKET;
              list<int> *table;
              MyHash(int b)
              {
                  BUCKET = b;
                  table = new list<int>[BUCKET];
              }
              void insert(int k)
              {
                  int i = k % BUCKET;
                  table[i].push_back(k);
              }
              bool search(int k)
              {
                  int i = k % BUCKET;
                  for (auto x : table[i])
                     if (x == k)
                        return true;
                  return false;      
              }
              void remove(int k)
              {
                  int i = k % BUCKET;
                  table[i].remove(k);
              }
          };
          
          // Driver method to test Map class 
          int main() 
          { 
              MyHash mh(7);
              mh.insert(10);
              mh.insert(20);
              mh.insert(15);
              mh.insert(7);
              cout << mh.search(10) << endl;
              mh.remove(15);
              cout << mh.search(15);
          } 
### Applications of Hashing:
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/a7298ad9-f7ea-4c75-a7d8-160866b67a01)

