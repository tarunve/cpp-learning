#include <iostream>
using namespace std;

/**
 *  Virtual Functions:
 *  =================
 *  ->  In Polymorphism, if pointer is of base class and object is of derived class, member function
 *      will be invoked from base class.
 *  ->  If we use virtual function in base class (default behaviour), we can invoke the member function
 *      from derived class.
 * 
 *  Rules for Virtual Functions:
 *  ===========================
 *  ->  They cannot be static.
 *  ->  They are accessed by object pointers.
 *  ->  Virtual functions can be a friend of another class.
 *  ->  Virtual Function in base class might not be used.
 *  ->  Virtual Function defined in the base class, there is no necessity of defining it in derived class.
 */
class BaseClass
{
public:
    int var_base = 1;
    //virtual function
    virtual void display()
    {
        cout << "Displaying base class variable var_base:" << var_base << endl;
    }
};
class DerivedClas : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Displaying base class variable var_base:" << var_base << endl;
        cout << "Displaying derived class variable var_derived:" << var_derived << endl;
    }
};
//===============================

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};
//==============================
int main()
{
    BaseClass *base_pointer;
    DerivedClas derived;
    base_pointer = &derived;
    base_pointer->var_base = 34;
    base_pointer->display();
    cout << "========================" << endl;

    string title;
    float rating, vlen;
    int words;

    // for CWH Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for CWH Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}