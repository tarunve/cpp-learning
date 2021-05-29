/**
 *  STL (Standard Template Library):
 *  ===============================
 *  ->  Library of Generic classes and functions.
 *  ->  Why STL? 
 *      ->  Reuse : well tested components.
 *      ->  Time Savings
 * 
 *  Components:
 *  ==========
 *  1.  Containers  : Objects which stores data.
 *  2.  Algorithms  : Procedure to process data.
 *  3.  Iterators   : Object which points to an element of a container.
 * 
 *  Types of container:
 *  =================
 *  1.  Sequence Container : Stores data in linear fashion. Ex, vector, list, deque etc.
 *      ->  vector : 
 *          ->  Random access is fast.
 *          ->  Insertion/Deletion in middle is slow. Insertion at the end is fast.
 *      ->  list:
 *          ->  Random access is slow.
 *          ->  Insertion in middle is fast. Insertion at the end is fast.
 *  2.  Associative Container : Stores data in such way that we have direct access (fast). Ex- set, 
 *              multiset, map, multimap.
 *      ->  All operations are fast except random access as data is stored in tree structure.
 *  3.  Derived Container : Real world modelling. Ex- stack, queue, priority queue.
 *      ->  It depends.
 */