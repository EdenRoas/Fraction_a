#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <sstream>

using namespace std;

namespace ariel
{
    class Fraction
    {
    private:
    int numerator;
    int denominator;
    //float number;
    double sum() const;
    double mul(const Fraction &fra1, const Fraction &fra2);
        
    public:
        // constructor and destructor
        Fraction();

        Fraction(int num ,int den);
        ~Fraction();
        
        // Addition
        friend Fraction operator+(const Fraction &fra1, const Fraction &fra2);
        friend Fraction operator+(const Fraction &fra1, float scalar);
        friend Fraction operator+(float scalar, const Fraction &fra1);
        
        // Subtraction
        friend Fraction operator-(const Fraction &fra1, const Fraction &fra2);
        friend Fraction operator-(const Fraction &fra1, float scalar);
        friend Fraction operator-(float scalar, const Fraction &fra1);
        
        // Multiplication
        friend Fraction operator*(const Fraction &fra1, const Fraction &fra2);
        friend Fraction operator*(const Fraction &fra1, float scalar);
        friend Fraction operator*(float scalar, const Fraction &fra1);
        
        //divide
        friend Fraction operator/(const Fraction &fra1, const Fraction &fra2);
        friend Fraction operator/(const Fraction &fra1, float scalar);
        friend Fraction operator/(float scalar, const Fraction &fra1);
        

         // comparison operators (<, >, <=, >=, ==, !=)
        friend bool operator>(const Fraction &fra1, const Fraction &fra2);
        friend bool operator>(const Fraction &fra1, const float scalar);
        friend bool operator>(const float scalar, const Fraction &fra1);

        friend bool operator<(const Fraction &fra1, const Fraction &fra2);
        friend bool operator<(const Fraction &fra1, const float scalar);
        friend bool operator<(const float scalar, const Fraction &fra1);

        friend bool operator==(const Fraction &fra1, const Fraction &fra2);
        friend bool operator==(const Fraction &fra1, const float scalar);
        friend bool operator==(const float scalar, const Fraction &fra1);

        //friend bool operator!=(const Fraction &fra1, const Fraction &fra2);
        friend bool operator>=(const Fraction &fra1, const Fraction &fra2);
        friend bool operator>=(const Fraction &fra1, const float scalar);
        friend bool operator>=(const float scalar, const Fraction &fra1);

        friend bool operator<=(const Fraction &fra1, const Fraction &fra2);
        friend bool operator<=(const Fraction &fra1, const float scalar);
        friend bool operator<=(const float scalar, const Fraction &fra1);
        
        // Increment and decrement operators
        //postfix y = x++ ->return the original num and then increment
        friend Fraction operator++(const Fraction &fra1); 
        friend Fraction operator--(const Fraction &fra1);
        //prefix ++(++x) -> first make increment and then return ths num
        friend Fraction &operator++(const Fraction &fra1, int prefix); 
        friend Fraction &operator--(const Fraction &fra1, int prefix); 
        
        
        // Input and output
        friend ostream &operator<<(ostream &os, const Fraction &fra1);
        friend istream &operator>>(istream &os, Fraction &fra1);
    };

};