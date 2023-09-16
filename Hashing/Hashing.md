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

#### Implementation of Open Addressing:
  - In Open Addressing we have 3 ways to handle collision:
  1. Linear Probing
  2. Quadratic Probing
  3. Double Hashing
  - Insertion through Linear probing, we pass the key to the hash function and it returns the slot where we have to insert and if any value is already present at that slot then we linearly traverse the array and we look for next empty slots there and then we insert the items there.
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/51456eb0-ab57-46d1-b1a8-2213afaaa893)
  - Searching and deletion using linear probing is a bit tricky. When we have to search or delete any value then we pass the value to the hash function we get the slot where this value should be present then we check that slot if it is there then we return or delete this value, but if the given value is not at given slot then we linearly search this value until we get the value or an empty slot and if all the slots are full and we dont get this value then we will stop our search when we return back to the first value from where we have started the searching (we may need to traverse circularly).
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/a889c82d-90cf-464b-8924-b1d64c910820)
  - Problem with deletion in linear probing:
    - When we delete some element in linear probing we need to mark that slot as deleted otherwise when we do search and we see empty slot because of deletion of some elements then we will stop our search there and there may be chances that element would be present. So if we mark the deleted slot as deleted then when we see deleted slot, we continue searching.
  - Problem with linear probing:
    - We have problem of clustering with linear probing.
      - Primary Clustering: One of the problems with linear probing is Primary clustering, many consecutive elements form groups and it starts taking time to find a free slot or to search for an element.
    - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/7c38539c-f2bc-4947-8f44-5ae29e18236e)
  - Insertion through Quadratic probing, we pass the key to the hash function and it returns the slot where we have to insert and if any value is already present at that slot then we traverse the array in quadratic fashion like we first check at 1 square = 1st empty slot, 2 square = 4th empty slot ... likewise and we took the empty slot and insert the element there.
  - Problem with Quadratic Probing:
    - We have problem of clustering with quadratic probing also, with linear probing we have problem of primary clustering and with quadratic probing we have problem of secondary clustering.
    - Secondary Clustering: Secondary clustering is less severe, two records only have the same collision chain (Probe Sequence) if their initial position is the same.
    - One more problem with quadratic probing is that, there are chances where quadratic probing will not get empty slot even if empty slot is present.
    - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/749eb89f-a5cf-4b54-85cb-190622547016)
  - Solution of clustering is Double Hashing:
    - Double hashing is a collision resolution technique used in hash tables. It works by using two hash functions to compute two different hash values for a given key. The first hash function is used to compute the initial hash value, and the second hash function is used to compute the step size for the probing sequence.
    - Double hashing has the ability to have a low collision rate, as it uses two hash functions to compute the hash value and the step size. This means that the probability of a collision occurring is lower than in other collision resolution techniques such as linear probing or quadratic probing.
    - However, double hashing has a few drawbacks. First, it requires the use of two hash functions, which can increase the computational complexity of the insertion and search operations. Second, it requires a good choice of hash functions to achieve good performance. If the hash functions are not well-designed, the collision rate may still be high.
    - Method 1: First hash function is typically hash1(key) = key % TABLE_SIZE
    - A popular second hash function is hash2(key) = PRIME – (key % PRIME) where PRIME is a prime smaller than the TABLE_SIZE.
    - A good second Hash function is:
      - It must never evaluate to zero
      - Just make sure that all cells can be probed 
    - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/7898ed8b-5034-47d5-9e94-bd719c6177f9)
    - hash(key, i) = (h1(key)+ih2(key))%m
    - ex- h1(key) = (key%7), h2(key) = 6 - (key%6)
    - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/99574efc-c715-4a00-96a7-bdd0cfd272c8)
    - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/ef46b974-0b47-437f-aaca-7e7e1783c514)
    - Algorithm of Double Hashing:
      - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/2736a9c9-75f0-4b8a-a198-de6e0a5d3d0e)
    - Performance Analysis of Double Hashing: 
      - Time Complexity:
        - Insertion: O(n)
        - Search: O(n)
        - Deletion: O(n)
      - Auxiliary Space: O(size of the hash table).
### Applications of Hashing:
  - ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/a7298ad9-f7ea-4c75-a7d8-160866b67a01)

### Unordered set in C++ STL

- In C++ STL, hashing is implemented using unordered set.
- unordered_set<int> uset;
- It is used to store only keys, we use unordered map for using key, value pairs.
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/bb0f03e4-639c-4e61-9292-d71e59a69dc9)
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/ee3fd226-1b0a-4d64-a0f0-8f8ead8c728f)

### Unordered map in C++ STL

- Unordered map is also based on hashing like unordered set but the difference is that unordered map stores the elements in key, value pair.
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/d4550bb1-abcd-4e9c-b063-dac8a0f7e492)
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/7df1477d-72e1-4d71-b6de-51bb26795e5a)
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/b71481aa-86d5-43a0-b351-747a491f13e1)
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/fc2d4358-64ee-4eef-99df-361f435c5c6d)
- 




