#include <iostream>
using namespace std;

/*
For a protected member:
                           Public derivation      Private Derivation    Protected Derivation
    1. Private members:      Not Inherited          Not Inherited         Not Inherited
    2. Protected members:    Protected              Private               Protected
    3. Public members:       Public                 Private               Protected
*/

class student
{
protected:
    int rollno;
public:
    void setrollno(int r)
    {
        rollno = r;
    }

    void getrollno(void)
    {
        cout << "Student's roll no is: " << rollno << endl;
    }
};

class exammarks : public student 
{
protected:
    double oop;
    double pf;
public:
    void setmarks(double m1, double m2)
    {
        oop = m1;
        pf = m2;
    }

    void getmarks(void)
    {
        cout << "OOP Marks: " << oop << endl;
        cout << "PF Marks: " << pf << endl;
    }
};

class result : public exammarks
{
private:
    double percentage;
public:
    void displayresult()
    {
        percentage = (oop + pf) / 2;
        getrollno();
        getmarks();
        cout << "Percentage: " << percentage << endl;
    }
};

int main()
{
    result s1;

    s1.setrollno(23);
    s1.setmarks(94.3, 91);
    s1.displayresult();

}


