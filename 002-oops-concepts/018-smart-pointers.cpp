/**
 *  Smart Pointers:
 *  ==============
 *  ->  The problem with heap memory is that when you don’t need it you must deallocate itself. 
 *  ->  So mostly the programmers are too lazy in writing the code for deallocation of objects 
 *      and that causes severe problem like memory leak which will cause the program to crash. 
 *      So the languages like Java, C#, .Net Framework they provide a garbage collection mechanism 
 *      to deallocate the object which is not in use. So in C++ 11, it introduces smart pointers 
 *      that automatically manage memory and they will deallocate the object when they are not in 
 *      use when the pointer is going out of scope automatically it’ll deallocate the memory.
 *  ->  Using Smart Pointers, we can make pointers to work in a way that we don’t need to explicitly 
 *      call delete. 
 *  ->  A smart pointer is a wrapper class over a pointer with an operator like * and -> overloaded. 
 *      The objects of smart pointer class look like a pointer but can do many things that a normal 
 *      pointer can’t like automatic destruction (yes, we don’t have to explicitly use delete), 
 *      reference counting and more.
 *  ->  The idea is to take a class with a pointer, destructor and overloaded operators like * and ->. 
 *      Since the destructor is automatically called when an object goes out of scope, the dynamically 
 *      allocated memory would automatically be deleted (or reference count can be decremented). 
 * 
 *  Types of Smart Pointer:
 *  =====================
 *  1.  unique_ptr: If you are using a unique pointer then if one object is created and pointer P1 
 *                  is pointing to this one then only one pointer can point this one at one time. 
 *      So we can’t share with another pointer, but we can transfer the control to P2 by removing P1. 
 *  2.  shared_ptr: If you are using shared_ptr then more than one pointer can point to this one 
 *                  object at a time and it’ll maintain a Reference Counter using use_count() method.
 *  3.  weak_ptr :  It’s much more similar to shared_ptr except it’ll not maintain a Reference Counter.
 *                  In this case, a pointer will not have a strong hold on the object. The reason is 
 *      if suppose pointers are holding the object and requesting for other objects then they may 
 *      form a Deadlock.
 */
#include <iostream> 
#include <memory>
using namespace std; 

template <class T> 
class SmartPtr { 
	T* ptr;
public: 
	// Constructor 
	explicit SmartPtr(T* p = NULL) { 
        ptr = p; 
    } 

	// Destructor 
	~SmartPtr() { 
        delete (ptr); 
    } 

	// Overloading dereferncing operator 
	T& operator*() { 
        return *ptr; 
    } 

	// Overloading arrow operator so that members of T can be accessed like a pointer (useful if 
    // T represents a class or struct or union type) 
	T* operator->() { 
        return ptr; 
    } 
}; 

//===========================================

class Rectangle { 
    int length; 
    int breadth; 
  
public: 
    Rectangle(int l, int b) 
    { 
        length = l; 
        breadth = b; 
    } 
  
    int area() 
    { 
        return length * breadth; 
    } 
}; 




int main() 
{ 
	SmartPtr<int> ptr(new int()); 
	*ptr = 20; 
	cout << *ptr; 

    // Unique pointer
    unique_ptr<Rectangle> P1(new Rectangle(10, 5)); 
    cout << P1->area() << endl; // This'll print 50 
    // unique_ptr<Rectangle> P2(P1);   
    unique_ptr<Rectangle> P2; 
    P2 = move(P1);   
    cout << P2->area() << endl;   // This'll print 50 

    // Shared Pointer
    shared_ptr<Rectangle> P3(new Rectangle(10, 5)); 
    cout << P3->area() << endl;    // This'll print 50 
    shared_ptr<Rectangle> P4; 
    P4 = P3; 
    cout << P4->area() << endl;  // This'll print 50 
    cout << P4->area() << endl;  // This'll now not give an error, 
    // This'll also print 50 now 
    // This'll print 2 as Reference Counter is 2 
    cout << P3.use_count() << endl; 

	return 0; 
} 
