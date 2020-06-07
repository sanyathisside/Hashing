# Hashing/Hashtable

 * Purpose: To support insrtion, deletion and search in average-case constant time.
 * Assumption: Order of elements is irrelevant.
 * `Hash function`: Hash["string key"] ==> Integer value.
 * Key Components:
    * Hash Fucntion.
    * Hash Table.
    * Collision Handling Scheme.
    
<hr/>

## Hash Table
 * Hash table is an array of fixed size(table size).
 * The elements of the array are indexed by a key, which is mapped to an array index( 0 to tablesize-1).
 
<hr/>

## Operations:
 * Insertion: T[h(key)]= value;
 * Deletion: T[h(key)] = NULL;
 * Search: return T[h(key)];

<hr/>

## Collision
 * Collision can't be avoided but it's chance can be reduced using a good hash function.
 * A good hash function should has the properties:
    * Reduced chance of collision- Distribute keys uniformly over table.
    * Should be fast to compute.

### Collison Handling Schemes:
 * Open Chaining- Separate Chaining
 * Closed Hashing- Open Addressing
    * Linear Probing
    * Quadratic Probing
 * Double Hashing
    
#### Separate chaining:
 * Implemented using Linked list.
 * Key k is stored in list at T[h(k)].

<hr/>

## <a href="https://github.com/sanya2508/Hashing/blob/master/hashing1.cpp"> Implementation of Hashmap </a>
 * Class implementation.
 * Insertion.
 * Print.
 * Rehashing.
 * Searching.
 
<hr/>

## Rehashing and Load Factor
 * `Rehashing`: Increase the table size as number of elements increases.
   * Load Factor > Threshold.
   * Create a table of 2x size.
   * Shift elemets.
   * Delete old table.
 * `Load factor`= Current size/Table size
 
<hr/>

## <a href="https://github.com/sanya2508/Hashing/blob/master/maps_stl.cpp">Maps STL </a>
## <a href="https://github.com/sanya2508/Hashing/blob/master/map%20stl(multimap).cpp">Multimap STL </a>
## <a href="https://github.com/sanya2508/Hashing/blob/master/map%20stl(linked%20list%20vertical%20order%20print).cpp">Maps STL Example: Vertical Order Print </a>
## <a href="https://github.com/sanya2508/Hashing/blob/master/unordered_map%20stl.cpp">Unordered Map STL </a>
## <a href="https://github.com/sanya2508/Hashing/blob/master/unordered_map%20phonebook.cpp">Unordered Map Example: Phonebook </a>
