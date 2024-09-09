# Hash Table
Table of data where the index of the table is a unique key that allows to grab an element in the table fast `O(1)`. Solves the issue of retreiving a data in linked list or array in constant time.

## Structure
- Init table
- Allocate Data
- Free Data
- Hash Function
    - function that generates a randomly unique index number
    - This number will be used to fetch the data from the table
- Collision Handler
    - Hash function can generate the same number from two different data
    - Collision handler should handle differentiate these