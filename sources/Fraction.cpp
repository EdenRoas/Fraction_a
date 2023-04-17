#include "Fraction.hpp"
using namespace std;
namespace ariel
{
    // constructor and destructor
     Fraction::Fraction()
    {
        
    }
    Fraction::Fraction(int num ,int den)
    {
        this->numerator = num;
        this->denominator = den;
    }
    Fraction fra_ans(3,5);
    
    double Fraction::sum() const
    {
        return 0;
    }

    double Fraction::mul(const Fraction &fra1, const Fraction &fra2)
    {
        return 0;
    }
    Fraction::~Fraction() {}
    
    //Addition
    Fraction operator+(const Fraction &fra1, const Fraction &fra2)
    {
        return fra_ans;
    }
    Fraction operator+(const Fraction &fra1, float scalar)
    {
        return fra_ans;
    }
    Fraction operator+(float scalar, const Fraction &fra1)
    {
        return fra_ans;
    }
    //Subtraction
    Fraction operator-(const Fraction &fra1, const Fraction &fra2)
    {
        return fra_ans;
    }
    Fraction operator-(const Fraction &fra1, float scalar)
    {
        return fra_ans;
    }
    Fraction operator-(float scalar, const Fraction &fra1)
    {
        return fra_ans;
    }
    
    //Multiplication
    Fraction operator*(const Fraction &fra1, const Fraction &fra2) // ans = fra1 * fra2
    {
        return fra_ans;
    }
    Fraction operator*(const Fraction &fra1, float scalar)
    {
        return fra_ans;
    }
    Fraction operator*(float scalar, const Fraction &fra1)
    {
        return fra_ans;
    }
    //Divide
    Fraction operator/(const Fraction &fra1, const Fraction &fra2) // ans = fra1 * fra2
    {
        return fra_ans;
    }
    Fraction operator/(const Fraction &fra1, float scalar)
    {
        return fra_ans;
    }
    Fraction operator/(float scalar, const Fraction &fra1)
    {
        return fra_ans;
    }
    // comparison operators (<, >, <=, >=, ==, !=)
    bool operator>(const Fraction &fra1, const Fraction &fra2)
    {
        return true;
    }
    bool operator>(const Fraction &fra1, const float scalar)
    {
        return true;
    }
    bool operator>(const float scalar, const Fraction &fra1)
    {
        return true;
    }

    bool operator<(const Fraction &fra1, const Fraction &fra2)
    {
        return true;
    }
    bool operator<(const Fraction &fra1, const float scalar)
    {
        return true;
    }
    bool operator<(const float scalar, const Fraction &fra1)
    {
        return true;
    }

    bool operator==(const Fraction &fra1, const Fraction &fra2)
    {
        return true;
    }
    bool operator==(const Fraction &fra1, const float scalar)
    {
        return true;
    }
    bool operator==(const float scalar, const Fraction &fra1)
    {
        return true;
    }

    bool operator>=(const Fraction &fra1, const Fraction &fra2)
    {
        return true;
    }
    bool operator>=(const Fraction &fra1, const float scalar)
    {
        return true;
    }
    bool operator>=(const float scalar, const Fraction &fra1)
    {
        return true;
    }

    bool operator<=(const Fraction &fra1, const Fraction &fra2)
    {
        return true;
    }
    bool operator<=(const Fraction &fra1, const float scalar)
    {
        return true;
    }
    bool operator<=(const float scalar, const Fraction &fra1)
    {
        return true;
    }
    // Increment and decrement operators
    //postfix y = x++ ->return the original num and then increment
    Fraction operator++(const Fraction &fra1) //fra1++
    { 
        return fra_ans;
    }

    Fraction operator--(const Fraction &fra1) //fra1--
    { 
        return fra_ans;
    }

    //prefix ++(++x) -> first make increment and then return ths num
    Fraction &operator++(const Fraction &fra1, int prefix)
    {
        return fra_ans;
    }
    Fraction &operator--(const Fraction &fra1, int prefix)
    {
        return fra_ans;
    }
    // Input & Output
    ostream &operator<<(ostream &os, const Fraction &fra1)
    {
        return os;
    }

    istream &operator>>(istream &is, Fraction &fra1)
    {
        return is;
    }
}