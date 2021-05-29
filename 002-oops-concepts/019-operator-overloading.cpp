/**
 *  Operator Overloading:
 *  ====================
 *  ->  In C++, we can make operators to work for user defined classes. This means C++ has the 
 *      ability to provide the operators with a special meaning for a data type, this ability 
 *      is known as operator overloading.
 *      For example, we can overload an operator ‘+’ in a class like String so that we can 
 *      concatenate two strings by just using +. Other example classes where arithmetic operators 
 *      may be overloaded are Complex Number, Fractional Number, Big Integer, etc.
 * 
 *  What is the difference between operator functions and normal functions?
 *  =======================================================================
 *  ->  Operator functions are same as normal functions. The only differences are, name of an 
 *      operator function is always operator keyword followed by symbol of operator and operator 
 *      functions are called when the corresponding operator is used.
 * 
 *  Can we overload all operators?
 *  ==============================
 *  ->  Almost all operators can be overloaded except few. Following is the list of operators 
 *      that cannot be overloaded.
 *          . (dot) , :: , ?: , sizeof
 *  
 *  Important points about operator overloading:
 *  ============================================
 *  1.  For operator overloading to work, at least one of the operands must be a user defined 
 *      class object.
 *  2.  Assignment Operator: Compiler automatically creates a default assignment operator with 
 *      every class. The default assignment operator does assign all members of right side to 
 *      the left side and works fine most of the cases (this behavior is same as copy constructor).
 *  3.  Conversion Operator: We can also write conversion operators that can be used to convert 
 *      one type to another type.
 *      Overloaded conversion operators must be a member method. Other operators can either be 
 *      member method or global method.
 *  4.  Any constructor that can be called with a single argument works as a conversion constructor, 
 *      means it can also be used for implicit conversion to the class being constructed.
 */
#include<iostream> 
using namespace std; 

class Complex { 
private: 
	int real, imag; 
public: 
	Complex(int r = 0, int i =0) {
        real = r; 
        imag = i;
    }   
	
	// This is automatically called when '+' is used with between two Complex objects 
	Complex operator + (Complex const &obj) { 
		Complex res; 
		res.real = real + obj.real; 
		res.imag = imag + obj.imag; 
		return res; 
	} 
	void print() { 
        cout << real << " + i" << imag << endl; 
    } 
}; 

class Point 
{ 
private: 
    int x, y; 
public: 
    Point(int i = 0, int j = 0) { 
        x = i;   y = j; 
    } 
    void print() { 
        cout << endl << " x = " << x << ", y = " << y; 
    } 
}; 

int main() 
{ 
	Complex c1(10, 5), c2(2, 4); 
	Complex c3 = c1 + c2; // An example call to "operator+" 
	c3.print();
    cout<<"==================="<<endl; 

    Point t(20, 20); 
    t.print(); 
    t = 30;   // Member x of t becomes 30 
    t.print(); 
} 
